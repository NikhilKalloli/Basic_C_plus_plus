#include <iostream>
/*There are two types of header files:
1.System header files: It comes with compiler
2.User defined header files: It is written by the programmer*/
// #include"nick.h" ---> This will produce an error if nick.h is not in the current directory
using namespace std;
int main()
{
    int a = 4, b = 5;
    cout << "Operators in C++:" << endl;
    cout << "Following are the operators in C++" << endl;
    // Arithmetic operators
    cout << "The value of a+b is " << a + b << endl;
    cout << "The value of a-b is " << a - b << endl;
    cout << "The value of a*b is " << a * b << endl;
    cout << "The value of a/b is " << a / b << endl;
    cout << "The value of a%b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout << endl;

    // Assignment operators--> used to assign values to variables
    // int a=3,b=9;
    // char d = 'd';

    // Comparasion operators
    cout << "Following are the Comparision operators in the C++" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;

    // Logical operators
    cout << "Following are the logical operators in the C++" << endl;
    cout << "The value of this logical AND operator ((a==b)&&(a<b)) is: " << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical OR operator ((a==b)||(a<b)) is: " << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical NOT operator (!(a==b)) is: " << (!(a == b)) << endl;

    return 0;
}
