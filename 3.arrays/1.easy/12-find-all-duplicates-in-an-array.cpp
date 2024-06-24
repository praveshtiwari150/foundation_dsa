/*

FIND ALL DUPLICATES IN AN ARRAY

Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.



Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:

Input: nums = [1,1,2]
Output: [1]
Example 3:

Input: nums = [1]
Output: []


Constraints:

n == nums.length
1 <= n <= 10^5
1 <= nums[i] <= n
Each element in nums appears once or twice.
*/

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        // approach 1: Time Complexity: O(n log n), Space Complexity: O(1) or O(n), depending on the sorting algorithm used.
        // vector<int> ans;

        // sort(nums.begin(), nums.end());

        // for(int i=0; i<nums.size()-1; i++){
        //     if(nums[i] == nums[i+1]){
        //         ans.push_back(nums[i]);
        //         i++;
        //     }
        // }

        // return ans;

        // approach 2: O(n), Space Complexity: O(1) 
        
        vector<int> ans;
        for (int n : nums)
        {
            n = abs(n);

            if (nums[n - 1] > 0)
            {
                nums[n - 1] *= -1;
            }
            else
            {
                ans.push_back(n);
            }
        }

        return ans;
    }
};