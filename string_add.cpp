#include <iostream>
using namespace std;
int main()
{
    string s, t;
    string m[23];
    int j = 0, i = 0;

    getline(cin, s);
    while (j < s.length())
    {
        while (s[j] != ' ' && s[j] != '\0')
        {
            m[i] = m[i] + s[j];
            j++;
        }
        j++;
        i++;
    }
    for (int s = 0; s < i; s++)
    {
        cout << m[s] << endl;
    }
    cout << endl;
    for (int z = 0; z < i; z++)
    {
        t = t + m[z];
        t = t + ' ';
    }
    cout << t << endl;

    return 0;
}