#include <iostream>
#include <vector>
#include <iterator>
#include <list>
#include <set>
#include <map>
#include <string>
using namespace std;
int main()
{
    int k = 0;
    vector<int> num(10);
    vector<int>::iterator iterv;
    iterv = num.begin();
    for (int i = 0; i < 10; i++)
    {
        num[i] = (i * 2);
    }
    for (; iterv != num.end(); iterv++)
    {
        cout << *iterv << endl;
    }
    list<int> lum(10, 23);
    list<int>::iterator iterl;
    iterl = lum.begin();
    for (; iterl != lum.end(); iterl++)
    {
        cout << *iterl << endl;
    }
    set<int> sum;
    set<int>::iterator iters;
    for (int i = 0; i < 10; i++)
    {
        sum.insert(i * 10);
    }
    sum.insert(41);
    iters = sum.begin();
    for (iters = sum.begin(); iters != sum.end(); iters++)
    {
        cout << *iters << endl;
    }
    map<string, int> mum;
    mum["ray"] = 100;
    mum["ram"] = 200;
    mum["ran"] = 300;
    mum["ras"] = 400;
    mum["raj"] = 500;
    map<string, int>::iterator iterm;
    for (iterm = mum.begin(); iterm != mum.end(); iterm++)
    {
        cout << iterm->first << "\t" << iterm->second << endl;
    }
    return 0;
}