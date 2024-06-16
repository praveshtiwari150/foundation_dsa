// pattern 1
// 1  2  3  4  5  6
// 1  2  3  4  5  6
// 1  2  3  4  5  6
// 1  2  3  4  5  6
// 1  2  3  4  5  6

#include<iostream>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    for (int i =1; i <= n; i++){
        for (int j =1; j <= m; j++){
            cout << j << "  ";
        }
        cout << endl;
    }

        return 0;
}