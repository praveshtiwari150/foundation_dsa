/*
MOVE ALL NEGATIVE ELEMENTS TO LEFT
Given an unsorted array arr[ ] having both negative and positive integers. The task is to place all negative elements at the end of the array without changing the order of positive elements and negative elements.

Examples:

Input : arr[] = [1, -1, 3, 2, -7, -5, 11, 6 ]
Output : [1, 3, 2, 11, 6, -1, -7, -5]
Explanation: By doing operations we separated the integers without changing the order.
Input : arr[] = [-5, 7, -3, -4, 9, 10, -1, 11]
Output : [7, 9, 10, 11, -5, -3, -4, -1]
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints:
1 ≤ arr.size ≤ 106
-109 ≤ arr[i] ≤ 109


*/

void segregateElements(vector<int> &arr)
{
    int n = arr.size();

    // Create an empty vector to store result
    vector<int> temp(n);

    // Traverse array and store positive elements in temp array
    int j = 0; // index of temp
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            temp[j++] = arr[i];
        }
    }

    // Store negative elements in temp array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[j++] = arr[i];
        }
    }

    // Copy contents of temp[] to arr[]
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}