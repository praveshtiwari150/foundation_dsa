#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> getAllSubarrays(vector<int> &arr)
{
    vector<vector<int>> subs;

    for (int start = 0; start < arr.size(); ++start)
    {
        for (int end = start; end < arr.size(); ++end)
        {
            vector<int> sub;
            for (int i = start; i <= end; ++i)
            {
                sub.push_back(arr[i]);
            }
            subs.push_back(sub);
        }
    }
    return subs;
}

void printSubs(const vector<vector<int>> &subs)
{
    for (const auto &sub : subs)
    {
        for (int num : sub)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> subs = getAllSubarrays(arr);
    printSubs(subs);
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> getAllSubarrays(int arr[], int size)
{
    vector<vector<int>> subs;

    for (int start = 0; start < size; ++start)
    {
        for (int end = start; end < size; ++end)
        {
            vector<int> sub;
            for (int i = start; i <= end; ++i)
            {
                sub.push_back(arr[i]);
            }
            subs.push_back(sub);
        }
    }
    return subs;
}

void printSubs(const vector<vector<int>> &subs)
{
    for (const auto &sub : subs)
    {
        for (int num : sub)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<vector<int>> subs = getAllSubarrays(arr, size);
    printSubs(subs);
    return 0;
}
