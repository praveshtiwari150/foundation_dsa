/*
SPECIAL ARRAY 1

An array is considered special if every pair of its adjacent elements contains two numbers with different parity.

You are given an array of integers nums. Return true if nums is a special array, otherwise, return false.



Example 1:

Input: nums = [1]

Output: true

Explanation:

There is only one element. So the answer is true.

Example 2:

Input: nums = [2,1,4]

Output: true

Explanation:

There is only two pairs: (2,1) and (1,4), and both of them contain numbers with different parity. So the answer is true.

Example 3:

Input: nums = [4,3,1,6]

Output: false

Explanation:

nums[1] and nums[2] are both odd. So the answer is false.



Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100

*/

class Solution
{
public:
    bool isArraySpecial(vector<int> &nums)
    {
        // for(int i=0; i<nums.size(); i++){
        //     int rem1, rem2;
        //     if(i+1 < nums.size()){
        //         rem1 = nums[i]%2;
        //         rem2 = nums[i+1]%2;

        //         if((rem1 == 0 && rem2 == 0) || (rem1 != 0 && rem2 != 0)){
        //             return false;
        //         }
        //     }
        // }

        // return true;

        // approach 2

        for (int i = 0; i < nums.size(); i++)
        {
            if (i + 1 < nums.size())
            {
                if ((nums[i] + nums[i + 1]) % 2 == 0)
                {
                    return false;
                }
            }
        }

        return true;
    }
};


// APPROACH 2

// odd number + even number = odd number, 
// even number + even number = even number, 
// odd number + odd number = even number.
// Just apply the logic and you are done !class Solution
{
public:
    bool isArraySpecial(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (i + 1 < nums.size())
            {
                if ((nums[i] + nums[i + 1]) % 2 == 0)
                {
                    return false;
                }
            }
        }

        return true;
    }
};

// APPROACH 3
bool isArraySpecial(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        if ((nums[i - 1] & 1) ^ (nums[i] & 1) == 0)
            return false;
    }

    return true;
}