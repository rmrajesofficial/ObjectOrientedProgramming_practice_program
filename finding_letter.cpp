#include <iostream>
#include <string.h>
using namespace std;
int countword(string s, string m)
{
    stringstream k(s);
    string h;
    int c = 0;
    while (k >> h)
    {
        if (h == m)
        {
            ++c;
        }
        return c;
    }
};
int main()
{
    string s;
    cout << "enter the string:";
    getline(cin, s);
    string m;
    cout << "enter the word u want to find in string: "<< endl;
    cin >> m;
    cout << countword(s,m)<< endl;
    if (countword(s, m) ==0)
     cout << "that word is not present" << endl;
    int c = 0;
    char f;
    cout << "enter the char which u want to find: ";
    cin >> f;
    for (int i = 0; 1 < s.length(); i++)
        if (s[i] == f)
            f + c;
    cout << "number of time" << f << " is found" << c << endl;
    if (c == 0)
        cout << "that character is not present" << endl;
    return 0;
}