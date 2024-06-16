#include<iostream>

using namespace std;

int main(){

    // my method
    // int n;

    // cin >> n;

    // for (int i = 1; i <= n; i++){
    //     for (int j = i; j >= 1; j--){
    //         cout << i << "  ";
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
            cout << row << "  ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}