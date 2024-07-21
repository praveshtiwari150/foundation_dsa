/*

680.Valid Palindrome 2
Given a string s, return true if the s can be palindrome after deleting at most one character from it.

Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:

Input: s = "abc"
Output: false


Constraints:

1 <= s.length <= 105
s consists of lowercase English letters

*/
class Solution
{
public:
    bool isPalindrome(string str, int l, int r)
    {

        while (l < r)
        {
            if (str.at(l) == str.at(r))
            {
                l++;
                r--;
            }

            else
            {
                return false;
            }
        }

        return true;
    }
    bool validPalindrome(string s)
    {
        int l = 0, r = s.length() - 1;

        int count = 0;
        while (l <= r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }

            else
            {
                return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
            }
        }

        return true;
    }
};

// approach 2

class Solution
{
public:
    bool validPalindrome(string s)
    {
        
        int i = 0, j = s.length() - 1;
        int count = 0, count1 = 0;

        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }

            else
            {
                i++;
                count++;
            }
        }

        i = 0, j = s.length() - 1;

        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }

            else
            {
                j--;
                count1++;
            }
        }

        if (count == 0 || count1 == 0)
        {
            return true;
        }

        if (count == 1 || count1 == 1)
        {
            return true;
        }

        return false;
    }
};