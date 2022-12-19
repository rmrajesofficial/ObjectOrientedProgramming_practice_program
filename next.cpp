#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string :";
    getline(cin, s);
    for (int i = 0; i <= s.length(); i++)
    {
        s[i] = s[i] + 1;
    }
    cout << "required is : " << s;
    return 0;
}