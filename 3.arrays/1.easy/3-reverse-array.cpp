#include <iostream>

using namespace std;

// Function to reverse the array
void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to print the elements of the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    // Reverse the array
    reverseArray(arr, 4, n - 1);

    cout << "Reversed array: ";
    printArray(arr, n);

    return 0;
}



//approach 2: using xor
#include <iostream>

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        arr[i] ^= arr[size - 1 - i];
        arr[size - 1 - i] ^= arr[i];
        arr[i] ^= arr[size - 1 - i];
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    reverseArray(myArray, size);

    // Print the reversed array
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
