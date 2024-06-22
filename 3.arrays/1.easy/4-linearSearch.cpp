#include<iostream>

using namespace std;

void createArray(int arr[], int size){
    cout << "Enter the " << size << " elements of array" << endl;
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

int linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++){
        if(arr[i] == key)
            return i;
    }

    return -1;
}

int main(){

    int size;
    cin >> size;
    int arr[size];

    createArray(arr, size);

    int key;
    cin >> key;

    int ans = linearSearch(arr, size, key);

    cout << key << " is present at index " << ans << endl;
    return 0;
}