/*
Array Duplicates

Given an array arr of size n which contains elements in range from 0 to n-1, you need to find all the elements occurring more than once in the given array. Return the answer in ascending order. If no such element is found, return list containing [-1].

Note: Try and perform all operations within the provided array. The extra (non-constant) ) space needs to be used only for the array to be returned.

Examples:

Input: arr[] = {0,3,1,2}, n = 4
Output: -1
Explanation: There is no repeating element in the array. Therefore output is -1.
Input: arr[] = {2,3,1,2,3}, n = 5
Output: 2 3
Explanation: 2 and 3 occur more than once in the given array.
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).

Constraints:
0 <= arr[i] <= n-1, for each valid i
1 <= n <= 10^5

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// #define endl "\n"
// int mod = 1000ll * 1000ll * 1000ll + 7;
// const int inf = 1000ll * 1000ll * 1000ll * 1000ll * 1000ll * 1000ll;
// #define cout std::cout
// #define cin std::cin

// bool arrayEnded = false;

// long long readInt(long long l, long long r, char endd) {
//     long long x = 0;
//     int cnt = 0;
//     int fi = -1;
//     bool is_neg = false;
//     // integer must not be started from zero
//     while (true) {
//         char g = getchar();
//         if (g == '-') {
//             assert(fi == -1);
//             is_neg = true;
//             continue;
//         }
//         if ('0' <= g && g <= '9') {
//             x *= 10;
//             x += g - '0';
//             if (cnt == 0) {
//                 fi = g - '0';
//             }
//             cnt++;
//             assert(fi != 0 || cnt == 1);
//             assert(fi != 0 || is_neg == false);

//             assert(!(cnt > 19 || (cnt == 19 && fi > 1)));
//         } else if (g == endd || g == '\n' || g == -1) {
//             if (is_neg) {
//                 x = -x;
//             }

//             if (!(l <= x && x <= r)) {
//                 cerr << l << ' ' << r << ' ' << x << '\n';
//                 assert(1 == 0);
//             }
//             // -1  -> this is the last character i.e null
//             if (g == '\n' or g == -1) { // if array ended
//                 arrayEnded = true;
//             }
//             return x;
//         } else {
//             assert(false);
//         }
//     }
// }

// string readString(int l, int r, char endd) {
//     string ret = "";
//     int cnt = 0;
//     while (true) {
//         char g = getchar();
//         assert(g != -1); // if invalid character
//         if (g == endd) {
//             break;
//         }
//         cnt++;
//         ret += g;
//     }
//     assert(l <= cnt && cnt <= r);
//     return ret;
// }

// long long readIntSp(long long l, long long r) {
//     return readInt(l, r, ' ');
// }

// long long readIntLn(long long l, long long r) {
//     return readInt(l, r, '\n');
// }

// string readStringLn(int l, int r) {
//     return readString(l, r, '\n');
// }

// string readStringSp(int l, int r) {
//     return readString(l, r, ' ');
// }

// vector<long long> readArray() {
//     arrayEnded = false;
//     int n = 0;
//     vector<long long> arr;
//     while (true) {
//         n++;
//         // change the array of elements accordingly
//         arr.push_back(readInt(0, 100000, ' '));
//         if (arrayEnded)
//             break;
//     }

//     return arr;
// }

// int sumN = 0;

// } Driver Code Ends
class Solution
{
public:
    vector<int> duplicates(vector<long long> arr)
    {
        // code here
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++)
        {

            int count = 1;
            int temp = arr[i];

            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[j] == temp)
                {
                    count++;
                }
            }

            if (count > 1)
            {
                ans.push_back(arr[i]);
            }
        }

        if (ans.empty())
        {
            return {-1};
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

void solve()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution obj;
    vector<int> ans = obj.duplicates(arr);
    for (int i : ans)
        cout << i << ' ';
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}

// int32_t main() {
//     // #ifndef ONLINE_JUDGE
//     //     freopen("input.txt", "r", stdin);
//     //     freopen("output.txt", "w", stdout);
//     // #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL), cout.tie(NULL);
//     int T = 1;
//     T = readInt(1, 2000, '\n'); // if multiple test cases
//     if (T == 1) {
//         cout << -1 << endl;
//         return 0;
//     }
//     cerr << "#Testcases read successfully" << endl;
//     while (T--) {
//         solve();
//         // cout<<'\n';
//     }
//     cerr << sumN << '\n';
//     assert(sumN <= 2000000);
//     cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
//     return 0;
// }
// } Driver Code Ends