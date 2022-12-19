#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class mainl
{
protected:
    int data;

public:
    mainl(int m)
    {
        int k;
        cin >> k;
        data = k;
    }
    virtual void display()
    {
        cout << "in main " << data << endl;
    }
};
class dev : public mainl
{
protected:
    int data1;

public:
    dev(int s) : mainl(s)
    {
        int k;
        cin >> k;
        data = k;
    }
    virtual void display()
    {
        cout << "in dev " << data << endl;
    }
};
int main()
{
    dev obj1(34);
    mainl *obj;
    obj = &obj1;
    obj->display();

    return 0;
}