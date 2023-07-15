#include <iostream>
using namespace std;
bool checkPalindrome(string str, int len)
{
    int i = 0;
    // base case
    if (i >= len / 2)
        return true;
    if (str[i] != str[len - i - 1])
    {
        return false;
    }

    // recursive call
    i++;
    return checkPalindrome(str, len);
}
int main()
{
    string name = "abba";
    bool isPalindrome = checkPalindrome(name, name.length());

    if (isPalindrome)
    {
        cout << "Its a Palindrome" << endl;
    }
    else
    {
        cout << "Its not a Palindrome" << endl;
    }

    return 0;
}