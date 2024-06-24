/*
SORT 0,1 AND 2

Sort 0s, 1s and 2s
Difficulty: MediumAccuracy: 50.58%Submissions: 656K+Points: 4
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


Example 1:

Input:
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated
into ascending order.
Example 2:

Input:
N = 3
arr[] = {0 1 0}
Output:
0 0 1
Explanation:
0s 1s and 2s are segregated
into ascending order.

Your Task:
You don't need to read input or print anything. Your task is to complete the function sort012() that takes an array arr and N as input parameters and sorts the array in-place.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 <= N <= 10^6
0 <= A[i] <= 2

*/

void sort012(int arr[], int n)
{
    // approach 1

    //     int zero = 0, one = 0, two=0;

    //     for(int i=0; i<n; i++){
    //         if(arr[i] == 0)
    //             zero++;

    //         if(arr[i] == 1)
    //             one++;

    //         if(arr[i]==2)
    //             two++;
    //     }

    //   for(int i=0; i<zero; i++){
    //       arr[i] = 0;
    //   }

    //   for(int i =zero; i<zero+one; i++){
    //       arr[i]=1;
    //   }

    //   for(int i=zero+one; i<n; i++){
    //       arr[i] = 2;
    //   }
}

// APPROACH 2
void sort012(int arr[], int n){
    int low=0;
    int mid = 0;
    int high = n-1;
    while(mid <= high) {
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
        else
            mid++;
    }
}

// APPROACH 3

class Solution
{
public:
    void sort012(int a[], int n)
    {
        // coode here
        int countZero = 0;
        int countOne = 0;
        int countTwo = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                countZero++;
            }
            if (a[i] == 1)
            {
                countOne++;
            }
            if (a[i] == 2)
            {
                countTwo++;
            }
        }
        int i = 0;
        while (countZero--)
        {
            a[i] = 0;
            i++;
        }
        while (countOne--)
        {
            a[i] = 1;
            i++;
        }
        while (countTwo--)
        {
            a[i] = 2;
            i++;
        }
    }
};