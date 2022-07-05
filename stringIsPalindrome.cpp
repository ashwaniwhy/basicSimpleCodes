#include <iostream>
#include <string>
using namespace std;

void stringIsPalindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            cout << str << " is not palindrome" << endl;
            return;
        }
    }
    cout << str << " is Palindrome" << endl;
}

int main()
{
    string str = "abba";
    stringIsPalindrome(str);
    cout << endl;
    string str1 = "abbac";
    stringIsPalindrome(str1);
    return 0;
}