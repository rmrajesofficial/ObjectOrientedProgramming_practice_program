#include <iostream>

using namespace std;
// template <class T,class M>
class planet
{
    int land;
    int atmosphere;
    friend void change(planet, int, int);

public:
    planet(int a, int b)
    {
        this->land = a;
        this->atmosphere = b;
    }
    void prin()
    {
        cout << land << endl
             << atmosphere << endl;
    }
};

void change(planet obj, int a, int b)
{
    // (int)land;
    obj.land = a;
    obj.atmosphere = b;
}

int main()
{
    planet earth(23, 21);
    earth.prin();
    return 0;
}