/*
TRIPLET SUM IN ARRAY
Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.


Example 1:

Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in
the array sums up to 13.
Example 2:

Input:
n = 5, X = 10
arr[] = [1 2 4 3 6]
Output:
1
Explanation:
The triplet {1, 3, 6} in
the array sums up to 10.

Your Task:
You don't need to read input or print anything. Your task is to complete the function find3Numbers() which takes the array arr[], the size of the array (n) and the sum (X) as inputs and returns True if there exists a triplet in the array arr[] which sums up to X and False otherwise.


Expected Time Complexity: O(n2)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ n ≤ 103
1 ≤ A[i] ≤ 105



*/

bool find3Numbers(int A[], int n, int X)
{
    // APPROACH 1
    sort(A, A + n);
    for (int i = 0; i < n; i++)
    {
        int l = i + 1, r = n - 1;

        while (l < r)
        {
            int sum = A[i] + A[l] + A[r];

            if (sum == X)
                return true;

            else if (sum > X)
                r--;

            else
                l++;
        }
    }

    return false;
}
