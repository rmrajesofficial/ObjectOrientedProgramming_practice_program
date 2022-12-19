#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream out;
    ifstream in;
    string s, s1, s2, s3, s4;
    out.open("fileio.txt");
    cout << "enter the string want to put in file 3 strings\n";
    getline(cin, s);
    getline(cin, s1);
    getline(cin, s2);
    out.clear();
    out << s << endl;
    out << s1 << endl;
    out << s2 << endl;
    out.close();
    in.open("fileio.txt");
    getline(in, s3);
    getline(in, s4);
    cout << s3 << endl
         << s4;
        
    return 0;
}