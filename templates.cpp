#include <iostream>
#include <string>
using namespace std;
template <class T>
class engin
{
public:
    T data1;
    T data2;
    engin(T a, T b)
    {
        this->data1 = a;
        this->data2 = b;
    }
    void prin()
    {
        cout << data1 << endl
             << data2 << endl;
    }
};
template <class T>
void prik(T data1, T data2)
{
    cout << data1 << endl
         << data2 << endl;
}
int main()
{
    engin<string> obj("Hello", "Hello");
    obj.prin();
    prik('5', 'c');

    return 0;
}