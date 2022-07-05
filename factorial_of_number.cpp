#include <iostream>
using namespace std;

int factNumber(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num;
    cout << "Enter Number:";
    cin >> num;
    cout << "Factorial of " << num << " is =" << factNumber(num) << endl;

    return 0;
}