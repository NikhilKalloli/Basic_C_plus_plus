#include<iostream>
#include<fstream>
using namespace std;

/*The useful classes for working working with files in C++ :
1. fstreambase
2. ifstream  --> derived from fstreambase
3. ofstream  --> derived from fstreambase
*/ 

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class
int main()
{
    string st = "Nikhil is Awesome";
    string st2;
    // Opening the file using Constructor and writing it.
    //  ofstream out("Sample60.txt");  // Write Operation
    //  out<<st;


    // Opening the file using Constructor and reading it.
    ifstream in("Sample60b.txt");  // Read Operation
    // in>>st2;
    getline(in, st2);
    cout<<st2;

    return 0;
}