#include <iostream>
using namespace std;
class unary
{
public:
    int x, y, z;
    unary() {}
    unary(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    friend void operator-(unary &);
    friend void operator++(unary &);
    friend void operator--(unary &);
    friend ostream &operator<<(ostream &out, unary &s);
};
void operator-(unary &b)
{
    b.x = -b.x;
    b.y = -b.y;
    b.z = -b.z;
}
void operator++(unary &b)
{
    ++b.x;
    ++b.y;
    ++b.z;
}
void operator--(unary &b)
{
    --b.x;
    --b.y;
    --b.z;
}
ostream &operator<<(ostream &out, unary &s)
{
    out << " (x,y,z) ="
        << "(" << s.x << "," << s.y << "," << s.z << ")" << endl;
    return out;
}
int main()
{
    unary Ray(7, 8, 9);
    cout << Ray;
    -(Ray);
    cout << Ray;
    -(Ray);
    cout << Ray;
    ++(Ray);
    cout << Ray;
    --(Ray);
    cout << Ray;
    return 0;
}