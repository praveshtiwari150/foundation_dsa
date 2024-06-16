/*
Pattern 16

D
C  D
B  C  D
A  B  C  D

*/

#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;

    while(row <= n){
        int col = 1;
        char ch = 'A' + n - row;
        
        while(col <= row ){
            cout << ch << "  ";
            ch = ch + 1;
            col++;
        }
        row++;
        cout << endl;
    }

    return 0;
}