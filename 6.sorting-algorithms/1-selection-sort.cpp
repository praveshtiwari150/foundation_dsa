// TIME COMPLEXITY: O(n^2) , SPACE COMPLEXITY: O(1)

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void selectionSort(vector<int>& arr){

    for (int i = 0; i < arr.size(); i++){
        int minIndex = i;

        for (int j = i + 1; j < arr.size(); j++){
            
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){

    vector<int> arr = {23, 45, 1, 67, 90, 22, 56, 94};

    cout << "Before Sorting: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\t";
    }

    cout << endl;

    selectionSort(arr);

    cout << "After Sorting: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}