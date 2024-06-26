#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;

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
    int key = 3;
    int result = binarySearch(arr, 5, key);

    if(result != -1){
        cout << "The element " << key << " is present at index " << result;
    }

    else{
        cout << "The element " << key << " not found " << endl;
    }
}