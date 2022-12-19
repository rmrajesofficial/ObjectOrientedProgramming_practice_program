#include <iostream>
using namespace std;
int main()
{
    string a;
    string b;
    string c;
    string d;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    getline(cin, d);
    string TotalStr = a + b + c + d;
    cout << "Output:\n"
         << TotalStr;
    return 0;
}