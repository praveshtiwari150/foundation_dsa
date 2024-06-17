/*
Pattern 19

 *  *  *  *
    *  *  *
       *  *
          * 

*/
#include<iostream>

using namespace std;

int main(){

    int n, row = 1;
    cin >> n;

    while(row <= n){

        int col = 1, space = 1;

        while(space < row){
            cout << "   ";
            space = space + 1;
        }

        while (col <= n - row + 1)
        {
            cout << " * " ;
            col++;
        }
        row++;
        cout << endl;
    }

    return 0;
}