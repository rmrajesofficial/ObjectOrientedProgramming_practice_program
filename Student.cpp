#include <iostream>
using namespace std;
class Student
{
private:
    int age;
    int enroll;
    string name;
    string branch;

public:
    void getter();
    void setter();
};
void Student::getter()
{
    int a, b;
    string nam, branc;
    cout << "enter name age enroll and branch" << endl;
    cin >> nam >> a >> b >> branc;
    name = nam;
    branch = branc;
    age = a;
    enroll = b;
}
void Student::setter()
{
    cout << "Output:" << endl;
    cout << name << " "
         << enroll << " "
         << age << " "
         << branch << endl;
}
int main()
{
    class Student umar;
    umar.getter();
    umar.setter();
    return 0;
}