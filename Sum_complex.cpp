#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    complex(){};
    complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    friend complex operator+(complex &, complex &);
    friend ostream &operator<<(ostream &, complex &);
};
complex::operator+(complex &c1, complex &c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
ostream &operator<(ostream &out, complex &c)
{
out<<" "( <<c.real<< " +" << c.img<< "¡"<<")" ;
return out;
}
int main()
{
    complex c1(2, 3) c2(4, 5), c3;
    c3 = C1 + C2;
    cout << "By member function " << endl;
    cout << "sum of " << c1 << " and " << C2 << " si " << c3 << endl;
    cout << "By friend function" << endl;
    c3 = operator+(C1, c2);
    cout << "sum of " << c1 << "and " << C2 << " si " << c3 << endl;
    return 0;
}