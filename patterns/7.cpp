/*
Pattern 7

1
2  3
4  5  6
7  8  9  10

*/

#include<iostream>

using namespace std;

int main(){
    // int n;
    // cin >> n;
    // int temp = 1;

    // for (int i = 1; i <= n; i++){
    //     for (int j = i; j >=1; j--){
    //         cout << temp << "  ";
    //         temp = temp + 1;
    //     }
    //     cout << endl;
    // }

    // babbar
    int n;
    cin >> n;
    int row = 1;
    int temp = 1;

    while(row <= n){
        int col = 1;
        while(col <= row){
            cout << temp << "  ";
            temp++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}