/*
Equilibrium Point

Given an array arr of n non-negative numbers. The task is to find the first equilibrium point in an array. The equilibrium point in an array is an index (or position) such that the sum of all elements before that index is the same as the sum of elements after it.

Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists.

Examples:

Input: n = 5, arr[] = {1,3,5,2,2}
Output: 3
Explanation: The equilibrium point is at position 3 as the sum of elements before it (1+3) = sum of elements after it (2+2).
Input: n = 1, arr[] = {1}
Output: 1
Explanation: Since there's only one element hence it's only the equilibrium point.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 <= n <= 105
0 <= arr[i] <= 109


*/

int equilibriumPoint(long long arr[], int n)
{

    // approach 1: Brute force time complexity: O(n^2), space complexity: O(1)

    // for(int i=0; i<n; i++){
    //     long long left = 0;

    //     for(int j=0; j<i; j++){
    //         left = left + arr[j];
    //     }

    //     long long right = 0;

    //     for(int k=i+1; k<n; k++){
    //         right = right + arr[k];
    //     }

    //     if(left == right){
    //         return i+1;
    //     }
    // }

    // return -1;

    // approach 2:

    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    long long sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum - arr[i];

        if (sum2 == sum)
            return (i + 1);

        sum2 = sum2 + arr[i];
    }

    return -1;
}
