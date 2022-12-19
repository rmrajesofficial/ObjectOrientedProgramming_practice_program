#include <iostream>
using namespace std;
class classtype
{
    int a;
    string s;

public:
    classtype(int a, string s)
    {
        this->a = a;
        this->s = s;
    }
    void display_data() { cout << "a= " << a << "\ns =" << s << endl; }
    operator int();
    operator string() { return s; }
};
classtype ::operator int() { return a; }
int main()
{
    classtype Ray(59, "rajes");
    int x = Ray;
    string y = Ray;
    cout << "By changing class ot primitive data type " << endl;
    cout << "int x= " << x << "\nstring y= " << y << endl;
    return 0;
}