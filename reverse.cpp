#include <iostream>
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
    int ss = size - 1;
    for (int i = 0; i < size / 2; i++)
    {
        char temp;
        temp = arr[i];
        arr[i] = arr[ss];
        arr[ss] = temp;
        ss--;
    }
    return arr;
}
int main()
{
    string b = "abcde";
    int size = b.length();
    verse rev(b, size);
    string str = rev.repeat();
    cout << str << endl;
    return 0;
}