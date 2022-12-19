#include <iostream>
using namespace std;
class first
{
    int a, b;

public:
    first();
    first(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int geta() { return a; }
    int getb() { return b; }
};
class second
{
    int m, n;

public:
    second() {}
    second(first f)
    {
        m = f.geta();
        n = f.getb();
    }
    int getm() { return m; }
    int getn() { return n; }
};
int main()
{
    first f1(5, 9);
    second s2;
    s2 = f1;
    cout << "By conversion of first class to second class :" << endl;
    cout << "value of m:"
         << s2.getm() << "\nvalue of n:" << s2.getn() << endl;
    return 0;
}