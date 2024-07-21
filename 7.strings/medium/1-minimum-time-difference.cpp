/*
539.MINIMUM TIME DIFFERENCE

Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.


Example 1:

Input: timePoints = ["23:59","00:00"]
Output: 1
Example 2:

Input: timePoints = ["00:00","23:59","00:00"]
Output: 0


Constraints:

2 <= timePoints.length <= 2 * 104
timePoints[i] is in the format "HH:MM".

*/

class Solution
{
public:
    int findMinDifference(vector<string> &timePoints)
    {

        vector<int> minutes;

        for (int i = 0; i < timePoints.size(); i++)
        {
            string temp = timePoints[i];

            int hour = stoi(temp.substr(0, 2));
            int min = stoi(temp.substr(3, 2));

            int total = hour * 60 + min;

            minutes.push_back(total);
        }

        sort(minutes.begin(), minutes.end());

        int n = minutes.size();
        int mini = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            int diff = minutes[i + 1] - minutes[i];

            mini = min(mini, diff);
        }

        // special case
        int lastdiff = (minutes[0] + 1440) - minutes[n - 1];

        mini = min(mini, lastdiff);

        return mini;
    }
};