/*
FIND THE NUMBER OF GOOD PAIR 1

You are given 2 integer arrays nums1 and nums2 of lengths n and m respectively. You are also given a positive integer k.

A pair (i, j) is called good if nums1[i] is divisible by nums2[j] * k (0 <= i <= n - 1, 0 <= j <= m - 1).

Return the total number of good pairs.

Example 1:

Input: nums1 = [1,3,4], nums2 = [1,3,4], k = 1

Output: 5

Explanation:

The 5 good pairs are (0, 0), (1, 0), (1, 1), (2, 0), and (2, 2).
Example 2:

Input: nums1 = [1,2,4,12], nums2 = [2,4], k = 3

Output: 2

Explanation:

The 2 good pairs are (3, 0) and (3, 1).

Constraints:

1 <= n, m <= 50
1 <= nums1[i], nums2[j] <= 50
1 <= k <= 50

*/

// APPROACH 1: BRUTE FORCE : TC-O(n * m), SC-O(1)
class Solution
{
public:
    int numberOfPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        int i = 0;

        int count = 0;
        int size = nums2.size();
        int j = 0;

        while (i < nums1.size())
        {
            int divisor = nums2[j] * k;
            int result = nums1[i] % divisor;

            if (result == 0)
            {
                count++;
                j++;
            }

            if (result != 0)
            {
                j++;
            }

            if (j > size - 1)
            {
                i++;
                j = 0;
            }
        }

        return count;
    }
};