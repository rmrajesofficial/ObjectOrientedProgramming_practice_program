#include <iostream>

using namespace std;

int main()
{
    string str = "hello";
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        for (int j = i; i < size; i++)
        {
            if (str[i] < str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    cout << str;

    return 0;
}