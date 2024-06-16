//pattern 2
/*
4  3  2  1
4  3  2  1
4  3  2  1
4  3  2  1
*/

#include<iostream>

using namespace std;

int main(){

    int n, m;
    cout << "Enter n and m:";
    cin >> n >> m;

    for (int i = 1; i <= n; i++){
        for (int j =m; j >=1; j--){
            cout << j << "  ";
        }
        cout << endl;
    }

        return 0;
}