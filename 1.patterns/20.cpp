/*
Pattern 20

 1  1  1  1
      2  2  2
         3  3
            4

*/
#include<iostream>

using namespace std;

int main(){

    int n, i = 1;

    cin >> n;

    while(i<=n){
        int j = 1, space = 1;

        while(space <= i){
            cout << "   ";
            space++;
        }

        while(j <= n-i+1){
            cout << i << "  ";
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}