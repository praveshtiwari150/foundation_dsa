/*
Pattern 9

1
2  1
3  2  1
4  3  2  1

*/
#include<iostream>

using namespace std;

int main(){

    // int n;
    // cin >> n;

    // for (int i = 1; i <= n; i++){
    //     for (int j = i; j>=1; j--){
    //         cout << j << "  ";
    //     }
    //     cout << endl;
    // }

    // babbar method

    int n;
    cin >> n;

    int row = 1;

    while(row <= n){
        int col = 1;

        while(col <= row){
            cout << (row - col + 1) << "  ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
} 