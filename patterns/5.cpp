/*
pattern 5

*
*    *
*    *    *
*    *    *    *

*/

#include<iostream>

using namespace std;

int main(){


// method by babbar
// int n;
// cin >> n;
// int row = 1;

// while(row <= n){
//     int col = 1;

//     while(col <= row){
//         cout << "*  ";
//         col = col + 1;
//     }

//     cout << endl;
//     row = row + 1;
// }

// my method
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = i; j >=0; j--){
            cout << "*" << "    ";
        }
        cout << endl;
    }

        return 0;
}