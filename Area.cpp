#include <iostream>
using namespace std;
class area_of_triangle
{
    int height;
    int base;

public:
    area_of_triangle();
};
area_of_triangle::area_of_triangle()
{
    int area;
    cout << "enter the height of triangle : ";
    cin >> height;
    cout << "enter the base fo triangle :";
    cin >> base;
    area = (base * height) / 2;
    cout << "area of triangle = " << area;
}
int main()
{
    area_of_triangle ar;
    return 0;
}