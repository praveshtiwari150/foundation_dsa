#include<iostream>

using namespace std;

void squareRoot(int n, int power){
    while(power != 0){
        n *= n;
        power--;
    }

    cout << n;
}

int main(){

    squareRoot(2,0);

    return 0;
}