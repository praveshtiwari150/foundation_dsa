/*
Pattern  23

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1, space = 1;
        while(space <= n - i){
            cout << "  ";
            space++;
        }

        while(j <= i){
            cout << j << " ";
            j++;
        }
        j = i - 1;

        while (j >= 1){
            cout << j << " ";
            j--;
        }
        i++;
        cout << endl;
        }
    return 0;
}