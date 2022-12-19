#include <iostream>
#include <string>
using namespace std;
class occurence
{
private:
    string a;

public:
    occurence(string b);
    void repeat();
};
occurence::occurence(string b) { a = b; }
void occurence::repeat()
{
    int i = 0;
    while (a[i] != 0)
    {
        int j = i + 1;
        while (a[j] != 0)
        {
            if (a[i] == a[j])
            {
                cout << "the repeated elements is : " << a[i] << endl;
            }
            j++;
        }
        i++;
    }
}
int main()
{
    string b = "manna";
    occurence oc(b);
    oc.repeat();
    return 0;
}