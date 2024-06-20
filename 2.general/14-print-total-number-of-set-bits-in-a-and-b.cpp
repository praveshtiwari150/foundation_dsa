#include<iostream>

using namespace std;

int countSetBits(int n){

    int ans = 0;
    while(n){
        if(n & 1){
            ans++;
        }
        n = n >> 1;
    }
}

int main(){

    int a, b;

    cin >> a >> b;

    if(a > b){
        cout << countSetBits(a) + countSetBits(b) << endl;
    }
    else{
        cout << countSetBits(b) + countSetBits(a) << endl;
    }
    
    return 0;
}