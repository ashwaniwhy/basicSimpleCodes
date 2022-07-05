#include <iostream>
using namespace std;

void fibonacciSeries(int num)
{
    int f1 = 0, f2 = 1, nextTerm;

    for (int i = 1; i <= num; i++)
    {
        if (i == 1)
        {
            cout << f1 << ",";
            continue;
        }
        if (i == 2)
        {
            cout << f2 << ",";
            continue;
        }
        nextTerm = f1 + f2;
        f1 = f2;
        f2 = nextTerm;
        cout << nextTerm << ",";
    }
}

int main()
{
    int num;
    cout << "Enter Number=";
    cin >> num;
    fibonacciSeries(num);

    return 0;
}