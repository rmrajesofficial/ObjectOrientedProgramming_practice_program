#include <iostream>
using namespace std;
int sum(int arr1[], int arr2[], int s1, int s2)
{
    int s3 = s1 + s2;
    int arr3[s3];

    for (int i = 0; i < s1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int j = 0; j < s1; j++)
    {
        arr3[s1 + j] = arr2[j];
    }
    for (int i = 0; i < s3 - 1; i++)
    {
        for (int j = i + 1; j < s3; j++)
        {
            if (arr3[i] == arr3[j])
            {
                for (int  i = j; i < s3-1; i++)
                {
                    arr3[i]=arr3[i+1];
                }
                s3--;
                
            }
        }
    }
    cout << "the union of two arrays are :- ";
    for (int i = 0; i < s3; i++)
    {
        cout << arr3[i] << " ";
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int s1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {1, 2, 3, 4, 6, 8};
    int s2 = sizeof(arr2) / sizeof(int);
    int sm = sum(arr1, arr2, s1, s2);

    return 0;
}