#include <iostream>
using namespace std;
class Ray
{
    double id;
    int age;
    char gender;

public:
    int func(int i);
    char func(char i);
    double func(double i);
};
int Ray ::func(int i)
{
    age = i;
    return age;
}
char Ray ::func(char i)
{
    gender = i;
    return gender;
}
double Ray ::func(double i)
{
    id = i;
    return id;
}
int main()
{
    Ray obj;
    cout << obj.func(20) << endl;
    cout << obj.func(10.7) << endl;
    cout << obj.func('M') << endl;
    return 0;
}