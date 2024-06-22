#include<iostream>
#include<climits>

using namespace std;

void createArray(int arr[], int size){
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

int findMax(int arr[], int n){

    int maximum = INT_MIN;

    for (int i = 0; i < n; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }
    }

    return maximum;
}

int findMin(int arr[], int n)
{

    int minimum = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    return minimum;
}
int main(){

    int size=5;
    int arr[size];

    createArray(arr, size);

    cout << "Maximum is " << findMax(arr, size) << endl;
    cout << "Minimum is " << findMin(arr, size) << endl;

    return 0;
}