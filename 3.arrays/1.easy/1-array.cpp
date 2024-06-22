#include<iostream>

using namespace std;

void createArray(int arr[], int size){
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

void printArray(int arr[], int size){
    cout << "Array elements: ";

    for (int i = 0; i < size; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main(){

    const int size = 6;
    int arr[size];

    createArray(arr, size);
    printArray(arr, size);

    return 0;
}