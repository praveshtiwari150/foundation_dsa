int isPalindrome(string S)
{
    // Your code goes here

    int l = 0, r = S.length() - 1;

    while (l <= r)
    {
        if (S[l] != S[r])
            return false;

        else
            l++;
        r--;
    }

    return true;
}