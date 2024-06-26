/*

FIRST AND LAST POSITION IN SORTED ARRAY


Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]


Constraints:

0 <= nums.length <= 10^5
-10^9 <= nums[i] <= 10^9
nums is a non-decreasing array.
-10^9 <= target <= 10^9

*/

class Solution
{

    int firstPosition(vector<int> &nums, int target)
    {
        int s = 0, e = nums.size() - 1;
        int position = -1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target)
            {
                position = mid;
                e = mid - 1;
            }

            if (nums[mid] < target)
            {
                s = mid + 1;
            }

            if (nums[mid] > target)
            {
                e = mid - 1;
            }
        }

        return position;
    }

    int lastPosition(vector<int> &nums, int target)
    {
        int s = 0;
        int e = nums.size() - 1;
        int position = -1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target)
            {
                position = mid;
                s = mid + 1;
            }

            if (nums[mid] < target)
            {
                s = mid + 1;
            }

            if (nums[mid] > target)
            {
                e = mid - 1;
            }
        }

        return position;
    }

public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans;

        ans.push_back(firstPosition(nums, target));
        ans.push_back(lastPosition(nums, target));

        return ans;
    }
};


// APPROACH 2: TWO POINTER

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        int first = -1, last = -1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
            {
                first = mid;
                last = mid;
                while (first > 0 && nums[first - 1] == target)
                {
                    first--;
                }
                while (last < nums.size() - 1 && nums[last + 1] == target)
                {
                    last++;
                }
                break;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return {first, last};
    }
};