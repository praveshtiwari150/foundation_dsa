/*

Given an array of length n consisting of only 0's and 1's in random order. Modify the array in-place to segregate 0s on the left side and 1s on the right side of the array.

Example 1:

Input:
n = 5
arr[] = {0, 0, 1, 1, 0}
Output: {0, 0, 0, 1, 1}
Explanation:
After segregate all 0's on the left and 1's on the right modify array will be {0, 0, 0, 1, 1}.

Example 2:
Input:
n = 4
arr[] = {1, 1, 1, 1}
Output: {1, 1, 1, 1}
Explanation: There are no 0 in the given array, so the modified array is 1 1 1 1.

Your Task:
You don't need to read input or print anything. Your task is to complete the function segregate0and1() which takes arr[] and n as input parameters and modifies arr[] in-place without using any extra memory.


Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ n ≤ 106
0 ≤ arr[i] ≤ 1

*/

void segregate0and1(int arr[], int n)
{
    // code here
    // approach 1: TIME COMPLEXITY: O(n), SPACE COMPLEXITY: O(1)
    // int zero = 0, one = 0;
    // for(int i=0; i<n; i++){
    //     if(arr[i] == 0){
    //         zero++;
    //     }
    // }

    // for(int i=0; i<zero; i++){
    //     arr[i]=0;
    // }

    // for(int i=zero; i<n; i++){
    //     arr[i] = 1;
    // }

    // approach 2: TWO POINTER TIME COMPLEXITY - O(n), space complexity - O(1)

    int left = 0, right = n - 1;

    while (left < right)
    {
        // Increment left index while we see 0 at left
        while (arr[left] == 0 && left < right)
            left++;

        // Decrement right index while we see 1 at right
        while (arr[right] == 1 && left < right)
            right--;

        // If left is smaller than right then there is a 1 at left
        // and a 0 at right. Exchange arr[left] and arr[right]
        if (left < right)
        {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}