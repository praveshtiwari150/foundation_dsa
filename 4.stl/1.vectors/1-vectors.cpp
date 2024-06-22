/*

Question 2: Write a C++ program that uses a vector to store the ages of 5 family members. Then, write functions to do the following:

Find the oldest age in the vector.
Calculate the average age of the family members.
Sort the ages in ascending order.

*/

#include <bits/stdc++.h>
using namespace std;

int findOldest(vector<int>& familyAges){
    int maxi = familyAges[0];

    for(auto age:familyAges){
        if(age > maxi)
            maxi = age;
    }

    return maxi;
}

double findAverage(vector<int>& arr){
    int value = 0;

    for(auto age:arr){
        value = value + age;
    }

    return static_cast<double>(value) / arr.size();
}
int main(){
    vector<int> familyAges = {34, 58, 15, 42, 19};

    int oldest = findOldest(familyAges);

    cout << "The oldest person is" << oldest << endl;

    double average = findAverage(familyAges);

    cout << "Average age is " << average << endl;
    sort(familyAges.begin(), familyAges.end());

    cout << "Sorted" << endl;

    for(auto age:familyAges){
        cout << age << "    ";
    }

    return 0;
}