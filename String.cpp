#include <iostream>
using namespace std;
void count(string s)
{
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] <= 'z' && s[i] >= 'a')
            c1++;
        else if (s[i] <= '9' && s[i] >= '1')
            c2++;
        else
            c3++;
    }
    cout << "Output:" << endl;
    cout << "total characters in a string :" << c1 << endl;
    cout << "total numbers in a string :" << c2 << endl;
    cout << "total specials in a string :" << c3 << endl;
}
int main()
{
    string s;
    getline(cin, s);
    count(s);
    return 0;
}