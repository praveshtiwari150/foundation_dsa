/*

Search in a Rotated Array
Difficulty: MediumAccuracy: 37.64%Submissions: 197K+Points: 4
Given a sorted and rotated array arr of n distinct elements which may be rotated at some point, and given an element key, the task is to find the index of the given element key in the array arr. The whole array arr is given as the range to search.

Rotation shifts elements of the array by a certain number of positions, with elements that fall off one end reappearing at the other end.

Note:- Return the 0-based index and if the key is not present in the array then return -1.

Examples :

Input:
n = 9
arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}
key = 10
Output: 5
Explanation: 10 is found at index 5.
Input:
n = 4
arr[] = {3, 5, 1, 2}
key = 6
Output: -1
Explanation:  There is no element that has value 6.
Expected Time Complexity: O(log n).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ n ≤ 107
0 ≤ arr[i] ≤ 108
1 ≤ key ≤ 108

*/

int search(int n, vector<int> &arr, int key)
{
    // complete the function here

    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;

        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= key && key <= arr[mid])
            {
                high = mid - 1;
            }

            else
            {
                low = mid + 1;
            }
        }

        else
        {
            if (arr[mid] <= key && key <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return -1;
}