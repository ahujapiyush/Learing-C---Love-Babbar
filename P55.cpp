#include <iostream>

using namespace std;

bool checkPalindrome(string s, int i, int j)
{

    if (i > j)
        return true;

    if (s[i] != s[j])
        return false;

    else
    {
        return checkPalindrome(s, i + 1, j - 1);
    }
    return false;
}

int main()
{
    string s = "abba";
    bool isPalindrome = checkPalindrome(s, 0, s.length() - 1);
    if (isPalindrome)
    {
        cout << "It's Palindrome";
    }
    else
    {
        cout << "not Palindrome";
    }
    return 0;
}