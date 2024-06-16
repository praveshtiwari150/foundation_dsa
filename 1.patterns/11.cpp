/*
Pattern 11

A  B  C
A  B  C
A  B  C

*/

#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;

    while(row<=n){
        int col = 1;
        char ch = 'A';

        while(col <= n){
            cout << ch << "  ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}