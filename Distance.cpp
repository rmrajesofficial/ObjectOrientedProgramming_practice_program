#include <iostream>
using namespace std;
class dist
{
    int feet, inches;

public:
    void setdata()
    {
        cout << "Enter feet:";
        cin >> feet;
        cout << "Enter inches:";
        cin >> inches;
        cout << endl;
    }
    dist operator+(dist d)
    {
        dist temp;
        temp.inches = inches + d.inches;
        temp.feet = feet + d.feet + (temp.inches / 12);
        temp.inches = temp.inches % 12;
        return temp;
    }
    friend ostream &operator<<(ostream &, dist &);
};
ostream &operator<<(ostream &out, dist &d)
{
    out << "(" << d.feet << " feet," << d.inches << " inches)";
    return out;
}
int main()
{
    dist d1, d2, d3;
    cout << "Enter 1st distance : " << endl;
    d1.setdata();
    cout << "Enter 2nd distance: " << endl;
    d2.setdata();
    d3 = d1 + d2;
    cout << "Addition of distances is " << d3 << endl;
    return 0;
}