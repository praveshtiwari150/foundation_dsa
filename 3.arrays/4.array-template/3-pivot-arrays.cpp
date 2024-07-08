#include <iostream>
#include <vector>

using namespace std;

// Function to partition the array around a pivot
int partition(vector<int> &arr, int low, int high)
{
    // Pivot can be chosen in different ways. Here, we are using the last element.
    int pivot = arr[high];
    int i = low - 1; // Index of smaller element

    // The goal is to move all elements smaller than the pivot to the left side
    // and all greater elements to the right side of the pivot.
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // Place the pivot element at the correct position in the sorted array.
    swap(arr[i + 1], arr[high]);
    return (i + 1); // Return the index of the pivot element after partition.
}

// Utility function to print the array
void printArray(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {10, 80, 30, 90, 40, 50, 70};
    int n = arr.size();
    // Partition the array and get the pivot index.
    int pivotIndex = partition(arr, 0, n - 1);

    cout << "Array after partitioning: ";
    printArray(arr);
    cout << "Pivot element is at index: " << pivotIndex << endl;

    // Important things to remember:
    // - The choice of pivot affects the performance of the partitioning.
    // - The pivot element itself is not guaranteed to be at its final sorted position.
    // - This partition function is used in QuickSort, where we recursively
    //   partition the subarrays around new pivots.
    // - Always test with different types of arrays (e.g., already sorted, reverse sorted, etc.)
    //   to ensure your partition function works correctly.

    return 0;
}
