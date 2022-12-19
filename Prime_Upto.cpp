#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int N;
    cout << "enter the number:";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (isPrime(i))
            cout << "\x1b[33m" << i << " "
                 << "\x1b[0m";
        else
            cout << "\x1b[31m" << i << " "
                 << "\x1b[0m";
    }
    return 0;
}