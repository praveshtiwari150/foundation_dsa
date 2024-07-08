#include <iostream>
#include <algorithm>

using namespace std;

// Function to rotate an array to the left by 'd' positions
void rotateLeft(int arr[], int n, int d)
{
    d = d % n; // To handle if d >= n
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

// Function to rotate an array to the right by 'd' positions
void rotateRight(int arr[], int n, int d)
{
    d = d % n; // To handle if d >= n
    reverse(arr, arr + n - d);
    reverse(arr + n - d, arr + n);
    reverse(arr, arr + n);
}

// Utility function to print the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Rotate array to the left by 2 positions
    rotateLeft(arr, n, 2);
    printArray(arr, n); // Output: 3 4 5 6 7 1 2

    // Rotate array to the right by 2 positions
    rotateRight(arr, n, 2);
    printArray(arr, n); // Output: 1 2 3 4 5 6 7

    return 0;
}
