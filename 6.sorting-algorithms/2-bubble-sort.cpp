#include<bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for (int i = 0; i < n; i++){
        bool swapped = false;

        for (int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
    }
}

int main(){
    vector<int> arr = { 12, 4, 53, 8, 34, 35, 2, 49 };

    cout << "Before Sorting" << endl;
    for (auto ele:arr){
        cout << ele << "\t";
    }

    cout << endl;
    
    bubbleSort(arr);

    cout << "After Sorting" << endl;
    for (auto ele : arr)
    {
        cout << ele << "\t";
    }

    cout << endl;
}