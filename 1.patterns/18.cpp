/*
Pattern 19

*  *  *  *
*  *  *
*  *
* 

*/

#include<iostream>

using namespace std;

int main(){

    int n;

    cin >> n;

    int row = 1;

    while(row <= n){
        int col = n - row + 1;

        while(col >= 1){
            cout << "*" << "  ";
            col--;
        }
        row++;
        cout << endl;
    }

    return 0;
}