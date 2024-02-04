#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Connecting our file with hout stream.
    ofstream hout("Sample60.txt");

    //Creating a name string and filling it with string entered by user
    cout << "Enter your name" << endl;
    string name;
    cin >> name;

    // Writing a string to the file.
    hout << name + " is my name " ;
    hout.close();

    ifstream hin("Sample60.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content<<endl;
    hin.close();
    return 0;
}