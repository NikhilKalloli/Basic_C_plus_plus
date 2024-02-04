#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("Sample60.txt");
    out<<"This is me\n";
    out<<"This is me also\n";
    out<<"This is also me\n";
    out.close();

    string st,st2;
    ifstream in;
    in.open("Sample60.txt");
    // in>>st>>st2;
    // cout<<st<<st2;

    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    
    in.close();

    return 0;
}