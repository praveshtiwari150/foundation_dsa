/*
Swap Alternate

Problem statement
You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.

You don't need to print or return anything, just change in the input array itself.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1sec
Sample Input 1:
1
6
9 3 6 12 4 32
Sample Output 1 :
3 9 12 6 32 4
Sample Input 2:
2
9
9 3 6 12 4 32 5 11 19
4
1 2 3 4
Sample Output 2 :
3 9 12 6 32 4 11 5 19
2 1 4 3

*/

void swapAlternate(int *arr, int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }
}

// approach 2:

// #include <iostream>
// using namespace std;

// void swap(int &a, int &b)
// {
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }

// int main()
// {
//     int arr[] = {10, 20}; // Example array with two elements to swap
//     cout << "Before swap: " << arr[0] << " " << arr[1] << endl;

//     swap(arr[0], arr[1]); // Swapping elements

//     cout << "After swap: " << arr[0] << " " << arr[1] << endl;
//     return 0;
// }

// approach 3:
// This method won’t cause overflow, but it’s only applicable to integral data types.Also, make sure that a and b are not the same variable, as this would set it to zero.

// #include <iostream>
// using namespace std;

// void swap(int &a, int &b)
// {
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
// }

// int main()
// {
//     int arr[] = {10, 20}; // Example array with two elements to swap
//     cout << "Before swap: " << arr[0] << " " << arr[1] << endl;

//     swap(arr[0], arr[1]); // Swapping elements using XOR

//     cout << "After swap: " << arr[0] << " " << arr[1] << endl;
//     return 0;
// }
