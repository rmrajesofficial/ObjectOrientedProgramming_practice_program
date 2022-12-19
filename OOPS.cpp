#include <iostream>
using namespace std;
class Students
{
    string name;
    string branch;
    int enroll;

public:
    void getter()
    {
        cout << name << endl
             << branch << endl
             << enroll << endl;
    }
    Students(string nme, string banch, int en)
    {
        name = nme;
        branch = banch;
        enroll = en;
    }
};
int main(void)
{
    Students Ray("Rajes", "IT", 63);
    Ray.getter();
    return 0;
}