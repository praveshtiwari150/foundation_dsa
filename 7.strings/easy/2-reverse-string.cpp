#include<iostream>

using namespace std;

int main(){

    string str;

    cin >> str;

    int l = 0, r = str.length() - 1;

    while(l<r){
        // char temp = str[l];
        // str[l] = str[r];
        // str[r] = temp;
        // l++;
        // r--;

        swap(str[l], str[r]);
        l++;
        r--;
    }

    cout << str;

    return 0;
}