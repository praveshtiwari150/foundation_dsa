#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(char first, char second){
    return first > second;
}

int main(){

    string s = "bhavya";

    // sorts in increasing order;
    sort(s.begin(), s.end());

    cout << s << endl;

    // use a custom comparator function to sort in decreasing order

    // sorts in decreasing order
    sort(s.begin(), s.end(), cmp);

    cout << s << endl;

    // we can also use cmp to solve int arrays in decreasing order

    vector<int> arr = {45, 78, 94, 36, 98};

    sort(arr.begin(), arr.end(), cmp);

    for(auto i : arr){
        cout << i << "\t";
    }

    cout << endl;

    return 0;
}