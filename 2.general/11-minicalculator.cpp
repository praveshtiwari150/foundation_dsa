#include<iostream>

using namespace std;

int main(){

    cout << "Enter the operation you want to perform" << endl;
    cout << "Press + for addition" << endl;
    cout << "Press - for subtraction" << endl;
    cout << "Press * for subtraction" << endl;
    cout << "Press / for subtraction" << endl;
    char ch;

    cin >> ch;

    cout << "Enter the input:";
    int a,b;
    cin >> a >> b;

    switch (ch)
    {
    case '+':
        cout << "Sum of " << a << " and " << b << " is " << a + b;
        break;

    case '-':
        cout << "Difference of " << a << " and " << b << " is " << a - b;
        break;

    case '*':
        cout << "Product of " << a << " and " << b << " is " << a * b;
        break;

    case '/':
        cout << "Divison of " << a << " and " << b << " is " << a / b;
        break;

    case '%':
        cout << "Remainder of " << a << " and " << b << " is " << a % b;
        break;

    default:
        cout << "We perform only the above listed operations";
        break;
    }

    return 0;
}   