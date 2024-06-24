#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] < key)
        {
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{
    int arr[5] = {3, 7, 12, 15, 21};
    int key = 21;
    int result = binarySearch(arr, 5, 21);

    cout << "The result of  binary search is " << result;
}