#include<bits/stdc++.h>

using namespace std;

void selectionSort(vector<int>& arr){

    int n = arr.size();

    for (int i = 0; i < n; i++){
        int mini = i;

        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }

        swap(arr[mini], arr[i]);
    }
}

void bubbleSort(vector<int>& arr){
    int n = arr.size();

    for (int i = 0; i < n; i++){
        bool swapped = false;
        for (int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
                swapped = true;
            }
        }

        if(swapped == false)
            break;
    }
}

int main(){
    vector<int> arr = {23, 32, 56, 78, 89, 12, 105, 34};

    for (auto i : arr)
    {
        cout << i << "\t";
    }
    cout << endl;

    bubbleSort(arr);

    for(auto i:arr){
        cout << i << "\t";
    }

    return 0;
}