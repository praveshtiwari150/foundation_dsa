/*

Given an integer number n, return the difference between the product of its digits and the sum of its digits.


Example 1:

Input: n = 234
Output: 15
Explanation:
Product of digits = 2 * 3 * 4 = 24
Sum of digits = 2 + 3 + 4 = 9
Result = 24 - 9 = 15
Example 2:

Input: n = 4421
Output: 21
Explanation:
Product of digits = 4 * 4 * 2 * 1 = 32
Sum of digits = 4 + 4 + 2 + 1 = 11
Result = 32 - 11 = 21


Constraints:

1 <= n <= 10^5


*/

#include<iostream>

using namespace std;

int main(){

    int t;

    cout << "Enter the number of tests  you want to perform: ";
    cin >> t;

    while(t>0){
        int n;
        int sum = 0, product = 1;

        cout << "Enter input for test " << t << ":";
        cin >> n;

        while(n > 0){
            int rem = n % 10;
            n = n / 10;

            sum = sum + rem;
            product = product * rem;
        }

        cout << "The difference is: ";
        cout << product - sum << endl;

        t--;
    }

    return 0;
}