/*

SECOND LARGEST

Given an array Arr of size N, print the second largest distinct element from an array. If the second largest element doesn't exist then return -1.

Example 1:

Input:
N = 6
Arr[] = {12, 35, 1, 10, 34, 1}
Output: 34
Explanation: The largest element of the
array is 35 and the second largest element
is 34.
Example 2:

Input:
N = 3
Arr[] = {10, 5, 10}
Output: 5
Explanation: The largest element of
the array is 10 and the second
largest element is 5.
Your Task:
You don't need to read input or print anything. Your task is to complete the function print2largest() which takes the array of integers arr and n as parameters and returns an integer denoting the answer. If 2nd largest element doesn't exist then return -1.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
2 ≤ N ≤ 105
1 ≤ Arri ≤ 105

*/

// my approach
int print2largest(int arr[], int n)
{
    // code here
    int firstMaxi = INT_MIN;
    int secondMaxi = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > firstMaxi)
        {
            firstMaxi = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == firstMaxi)
        {
            continue;
        }
        if (arr[i] > secondMaxi)
        {
            secondMaxi = arr[i];
        }
    }

    return secondMaxi;
}


// approach 2 more efficient

int print2largest(int arr[], int n)
{
    int first = INT_MIN, second = INT_MIN;

    // Find the largest number in the array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            // Update second if arr[i] is between first and second
            second = arr[i];
        }
    }

    // Check if there was any second largest number
    if (second == INT_MIN)
    {
        return -1;
    }
    else
    {
        return second;
    }
}
