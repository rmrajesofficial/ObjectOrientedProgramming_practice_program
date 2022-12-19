#include <iostream>
using namespace std;
class Employe;
class temp
{
public:
    void PlusOne(Employe temp);
};
class Employe
{
    int age;
    int enroll;
    friend void temp ::PlusOne(Employe temp);

public:
    void setdata(int a, int b);
    void getdata();
};
void Employe::setdata(int a, int b)
{
    age = a;
    enroll = b;
}
void Employe::getdata(void)
{
    cout << "age is " << age << "\nenroll no. is " << enroll << endl;
}
void temp ::PlusOne(Employe temp)
{
    temp.age++;
    temp.enroll++;
    temp.setdata(temp.age, temp.enroll);
    temp.getdata();
}
int main()
{
    Employe ray, wave;
    temp temp;
    ray.setdata(18, 63);
    ray.getdata();
    wave.setdata(23, 90);
    wave.getdata();
    temp.PlusOne(ray);
    return 0;
}