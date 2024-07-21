/*
125. Valid Plaindrome

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.



Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.


Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.

*/

#include <string>
class Solution
{

private:
    string reverseString(string s)
    {
        int l = 0, r = s.length() - 1;

        while (l < r)
        {
            swap(s[l], s[r]);
            l++;
            r--;
        }

        return s;
    }

public:
    bool isPalindrome(string s)
    {
        string temp = "";
        int i = 0;

        while (i < s.length())
        {
            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
            {
                temp.push_back(s[i]);
                i++;
            }

            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                temp.push_back(s[i] - 'A' + 'a');
                i++;
            }

            else
            {
                i++;
            }
        }

        string rev = reverseString(temp);

        if (rev == temp)
        {
            return true;
        }

        return false;
    }
};

// approach 2: two pointer

// approach 2

class Solution
{

public:
    bool isPalindrome(string s)
    {
        int start = 0;
        int end = s.size() - 1;
        while (start <= end)
        {
            if (!isalnum(s[start]))
            {
                start++;
                continue;
            }
            if (!isalnum(s[end]))
            {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end]))
                return false;
            else
            {
                start++;
                end--;
            }
        }
        return true;
    }
};