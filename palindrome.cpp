#include <iostream>
using namespace std;
int palindrome(int num, int s)
{
    int sum = 0, temp;
    temp = num;
    while (num != 0)
    {
        sum = sum * 10 + num % 10;
        num = num / 10;
    }
    if (sum == temp)
        return 1;
    return 0;
}
int main()
{
    cout << "enter the number ";

    int num;
    cin >> num;
    int size = sizeof(num) / sizeof(int);

    if (palindrome(num, size))
    {
        cout << "the number is palindrome";
    }
    else
    {
        cout << "the number is no palindrome";
    }

    return 0;
}