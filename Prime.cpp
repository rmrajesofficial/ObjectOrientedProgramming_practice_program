#include <iostream>
using namespace std;
class no_prime
{
public:
    void get_data(void);
    void Put_data(int no, int sum);
};
void no_prime::get_data(void)
{
    int no, sum = 0;
    cout << "enter a number:";
    cin >> no;
    Put_data(no, sum);
}
void no_prime::Put_data(int no, int sum)
{
    for (int i = 1; i <= no; i++)
    {
        if (no % i == 0)
        {
            sum++;
        }
    }
    if (sum == 2)
        cout << no << " is a prime no. " << endl;
    else
        cout << no << " is not a prime no." << endl;
};
int main()
{
    no_prime shivam;
    shivam.get_data();
    return 0;
}