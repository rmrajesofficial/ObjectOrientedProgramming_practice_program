#include <iostream>
using namespace std;
int main()
{
    int slow = 0, fast = 1, sum = 0;
    int num = 10;
    cout << "Output :\n";
    cout << "0"
         << " "
         << "1"
         << " ";
    for (int i = 2; i <= num; i++)
    {
        sum = fast + slow;
        slow = fast;
        fast = sum;
        cout << sum << " ";
    }

    return 0;
}

// write a program to find the number of occurances of given character and word in a string
// write a program to print a gven string in a chronological order
// write a program to reverse the string without using string hndling function
// write a program that reads the name national institute of technology from the keyboard into three saparate string and conconate them in a new string object using + operator and append function