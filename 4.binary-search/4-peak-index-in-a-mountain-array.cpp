/*

PEAK INDEX IN A MOUNTAIN ARRAY

You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.



Example 1:

Input: arr = [0,1,0]

Output: 1

Example 2:

Input: arr = [0,2,1,0]

Output: 1

Example 3:

Input: arr = [0,10,5,2]

Output: 1


Constraints:

3 <= arr.length <= 10^5
0 <= arr[i] <= 10^6
arr is guaranteed to be a mountain array.

*/

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int s = 0, e = arr.size() - 1;
        int mid = s + (e - s) / 2;

        while (s < e)
        {
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }

            else if (arr[mid] > arr[mid + 1])
            {
                e = mid;
            }

            mid = s + (e - s) / 2;
        }

        return s;
    }
};