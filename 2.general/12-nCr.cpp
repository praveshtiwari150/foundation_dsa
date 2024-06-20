#include<iostream>

using namespace std;

int factorial(int n){

    int ans = 1;

    while(n >0){
        ans = ans * n;
        n--;
    }

    return ans;
}

int nCr(int n, int r){

    int result = factorial(n) / (factorial(n - r) * factorial(r));

    return result;
}

int main(){

    int n,r;

    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    int ans = nCr(n, r);

    cout << "Anwer is: ";
    cout << ans;

    return 0;
}