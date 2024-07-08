#include<bits/stdc++.h>

// Time Complexity : O(N ^ 2)
// Auxiliary Space : O(1) 

using namespace std;

void insertionSort(vector<int>& arr){

    int n = arr.size();
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--){
            if(arr[j] > temp){
                arr[j + 1] = arr[j];
            }

            else{
                break;
            }
        }

        arr[j + 1] = temp;
    }
}

int main(){
    vector<int> arr = {23, 81, 98, 23, 56, 74, 95};

    cout << "Before Sorting" << endl;
    for(auto i:arr){
        cout << i << "\t";
    }
    cout << endl;
    insertionSort(arr);

    cout << "After Sorting" << endl;
    for (auto i : arr)
    {
        cout << i << "\t";
    }
}