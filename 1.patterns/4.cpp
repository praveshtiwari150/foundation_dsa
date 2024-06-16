/*
Pattern 4

9   8   7
6   5   4
3   2   1

*/

#include<iostream>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int temp = n * m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << temp << "   ";
            temp = temp - 1;
        }
        cout << endl;
    }

        return 0;
}