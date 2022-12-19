#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int arr1[2][3] = {2, 3, 4, 2, 3, 4};
    int arr2[2][3] = {23, 31, 41, 25, 73, 45};
    int arr3[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << "\n"
             << endl;
    }
    return 0;
}