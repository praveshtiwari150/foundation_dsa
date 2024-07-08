/*

UNION OF TWO ARRAYS

O((n+m)log(n+m))

Given two arrays arr1[] and arr2[], the task is to find the number of elements in the union between these two arrays.

The Union of the two arrays can be defined as the set containing distinct elements from both arrays. If there are repetitions, then only one element occurrence should be there in the union.

Note: Elements are not necessarily distinct.

Examples

Input: arr1[] = [1, 2, 3, 4, 5], arr2[] = [1, 2, 3]
Output: 5
Explanation: 1, 2, 3, 4 and 5 are the elements which comes in the union setof both arrays. So count is 5.
Input: arr1[] = [85, 25, 1, 32, 54, 6], arr2[] = [85, 2]
Output: 7
Explanation: 85, 25, 1, 32, 54, 6, and 2 are the elements which comes in the union set of both arrays. So count is 7.
Input: arr1[] = [1, 2, 1, 1, 2], arr2[] = [2, 2, 1, 2, 1]
Output: 2
Explanation: We need to consider only distinct. So count is 2.


Expected Time Complexity: O(n+m)
Expected Auxilliary Space: O(n+m)

Constraints:
1 ≤ arr1.size, arr2.size ≤ 105
0 ≤ arr1[i], arr2[i] < 105


*/

int doUnion(vector<int> arr1, vector<int> arr2)
{
    // code here
    // Insert all elements from arr1 into the set
    set<int> st;

    for (int num : arr1)
    {
        st.insert(num);
    }

    // Insert all elements from arr2 into the set
    for (int num : arr2)
    {
        st.insert(num);
    }

    // The size of the set is the count of unique elements from both vectors
    return st.size();
}