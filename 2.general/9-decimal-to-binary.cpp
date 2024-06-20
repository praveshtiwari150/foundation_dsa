// C++ program to convert binary to decimal
#include <iostream>
#include<math.h>
using namespace std;

// Function to convert binary to decimal

int custompower(int n, int i){

    int ans = 1;

    while(i>0){
        ans = ans * n;
        i--;
    }

    return ans;
}

int convertTobinary(int n){
    int ans = 0;
    int i = 0;

    while(n != 0){
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }

    return ans;
}
int main() {
    int n;
    cin >> n;

    cout << "answer is " << convertTobinary(n);

    return 0;
}
