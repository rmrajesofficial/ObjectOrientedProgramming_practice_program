#include <iostream>
#include <math.h>
using namespace std;
int expration(int a, int b, int c)
{
    if ((b * b - 4 * a * c) < 0)
    {
        cout << "complex values of x" << endl;
    }
    else
    {
        int exp1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
        int exp2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
        cout << "the values of x is " << exp1 << " and " << exp2 << endl;
    }
}
int main()
{
    int a, b, c;
    // ax^2+bx+c=0
    cout << "enter the value of x^2" << endl;
    cin >> a;
    cout << "enter the value of x" << endl;
    cin >> b;
    cout << "enter constaant value" << endl;
    cin >> c;
    expration(a, b, c);
    return 0;
}