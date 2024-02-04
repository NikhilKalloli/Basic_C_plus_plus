#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found,Compiler suppies it's own copy constructor.
    Number(Number &obj)
    {
        cout << "Copy Constructor called !!! " << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(29), z2;
    x.display();
    y.display();
    z.display();
    Number z1(x); // Copy constructor invoked.
    z1.display();
    // z1 should resemble z or x or y.

    z2 = z; // Copy constructor not called.
    z2.display();

    Number z3 = z; // Copy constructor invoked.
    z3.display();

    return 0;
}