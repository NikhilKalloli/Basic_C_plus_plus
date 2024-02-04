#include <iostream>
using namespace std;

/*
Syntax for initilasition list in constructor:
constructor(argumrnt-list) : initilisation-section
{
    assignment + other code
}

class Test
{
        int a;
        int b;
        public:
            Test(int i, int j): a(i),b(j)    {Constructor-body}
};



*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : b(j), a(i+b) //-->RED FLAG This will create problem as 'a' will be initilised first as it is declared first.
    Test(int i, int j) : a(i)
    {
        b = j;
        cout << "Constructor Executed" << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}