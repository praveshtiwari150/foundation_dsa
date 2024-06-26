/*
NUMBER OF OCCURENCE

Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

Example 1:

Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 4
Explanation: 2 occurs 4 times in the
given array.
Example 2:

Input:
N = 7, X = 4
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 0
Explanation: 4 is not present in the
given array.
Your Task:
You don't need to read input or print anything.
Your task is to complete the function count() which takes the array of integers arr, n, and x as parameters and returns an integer denoting the answer.
If x is not present in the array (arr) then return 0.

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105
1 ≤ Arr[i] ≤ 106
1 ≤ X ≤ 106

*/

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int middle = arr[mid];
        if (middle == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > middle)
        {
            s = mid + 1;
        }
        else if (key < middle)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int middle = arr[mid];
        if (middle == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > middle)
        {
            s = mid + 1;
        }
        else if (key < middle)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

class Solution
{
public:
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int count(int arr[], int n, int x)
    {
        // code here
        int firstIndex = firstOcc(arr, n, x);
        int lastIndex = lastOcc(arr, n, x);
        if (firstIndex == -1 && lastIndex == -1)
        {
            return 0;
        }
        else
        {
            int noOcc = lastIndex - firstIndex + 1;
            return noOcc;
        }
    }
};