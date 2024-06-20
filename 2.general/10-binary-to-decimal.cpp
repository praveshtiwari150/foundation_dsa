#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int base = 1;
    int decimal = 0;
    int temp = n;

    while(temp != 0){
        int bit = temp % 10;
        temp = temp / 10;

        decimal = decimal + bit * base;
        base = base * 2;
    }

    cout << decimal;

    return 0;
}