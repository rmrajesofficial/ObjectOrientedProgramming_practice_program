#include <iostream>
using namespace std;
class complex
{
public:
    int real, img;
    complex(){};
    complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    friend complex operator+(complex &, complex &);
    void Get_data()
    {
        cout << "(" << real << "+" << img << "i"
             << ")" << endl;
    }
};
complex operator+(complex &c1, complex &c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main()
{
    complex c1(2, 3), c2(4, 5), c3;
    c3 = c1 + c2;
    cout << "the sum of c1 and c3 is :" << endl;
    c3 = operator+(c1, c2);
    c3.Get_data();
    return 0;
}