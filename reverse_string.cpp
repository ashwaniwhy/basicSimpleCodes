#include <iostream>
#include <string>
using namespace std;
/*void swapValue(char &a, char &b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}*/
void rev_string(string &str)
{
    int num = str.length();

    for (int i = 0; i <= num / 2; i++)
    {
        swap(str[i], str[num - i - 1]);
    }
}

int main()
{
    string str = "ashwani";
    rev_string(str);
    cout << str;

    return 0;
}