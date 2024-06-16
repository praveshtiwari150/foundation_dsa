/*
Pattern 15

A
B  C
C  D  E
D  E  F  G

*/
#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;

    while(row <= n){
        char ch = 'A' + row - 1;
        int col = 1;

        while(col <= row){
            cout << ch << "  ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}