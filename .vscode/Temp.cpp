#include <iostream>
#include <string>
using namespace std;
class verse
{
private:
    string arr;
    int size;

public:
    verse(string a, int s);
    string repeat();
};

verse::verse(string a, int s)
{
    arr = a;
    size = s;
}
string verse::repeat()
{
    string str;
    int ss = size - 1;

    for (int i = 0; i < size; i++)
    {
        str = str + arr[ss];
        ss--;
        // cout << str[i] << endl;
    }
    return str;
}

int main()
{
    string b = "abcde";
    // b[5] = 'h';
    // cout << b;
    int size = b.length();
    verse rev(b, size);
    string str = rev.repeat();
    cout << str;
    return 0;
}