#include <iostream>
using namespace std;
class Base
{
    int a;
    string s;

public:
    Base() {}
    Base(int a) { this->a = a; }
    Base(string s, int a = 59)
    {
        this->a = a;
        this->s = s;
    }
    void set_data(int a, string s)
    {
        this->a = a;
        this->s = s;
    }
    void display_data() { cout << "a= " << a << "\ns =" << s << endl; }
};
int main()
{
    Base Ray, Wave;
    Ray.set_data(89, "rajes");
    Ray.display_data();
    int system = 59;
    string ssystem = "Wave";
    Wave = system;
    Wave = ssystem;
    cout << "\nobject wave : \n";
    Wave.display_data();
    return 0;
}