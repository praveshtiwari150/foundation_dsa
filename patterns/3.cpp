// pattern 3
/*
1   2   3
4   5   6
7   8   9
*/

#include<iostream>

using namespace std;

int main(){
    int n, m;
    int temp = 1;

    cout << "Enter n and m: ";
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << temp << "   ";
            temp = temp + 1;
        }
        cout << endl;
    }

        return 0;
}