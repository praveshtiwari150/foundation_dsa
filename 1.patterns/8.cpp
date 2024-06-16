/*
Pattern 8

1
2  3
3  4  5
4  5  6  7

*/

#include<iostream>

using namespace std;

int main(){

    // int n;
    // cin >> n;

    // for (int i = 1; i <= n; i++){
    //     int temp = i;
    //     for (int j = 1; j <= i; j++ ){
    //         cout << temp << "  ";
    //         temp++;
    //     }
    //     cout << endl;
    // }

    // babbar method
    int n;
    cin >> n;
    int row = 1;

    while(row <= n){
        int col = 1;
        int temp = row;

        while (col<=row){
            cout << temp << "  ";
            temp = temp + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}