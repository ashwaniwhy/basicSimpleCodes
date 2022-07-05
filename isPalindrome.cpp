#include <iostream>
using namespace std;
void isPalindrome(int num)
{
    int rev = 0, rem, fact = 1;
    int originalNumber = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (rev != originalNumber)
        cout << "Number is not Palindrome." << endl;
    else
        cout << "Number is Palindrome." << endl;
}

int main()
{
    int num;
    cout << "Enter Number:";
    cin >> num;
    isPalindrome(num);

    return 0;
}