#include <iostream>
using namespace std;

void rev_number(int num)
{
    int n, rev = 0, rem;
    n = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    cout << "Reverse of number " << n << " is = " << rev;
}
int main()
{
    int num;
    cout << "Enter number:";
    cin >> num;
    rev_number(num);

    return 0;
}