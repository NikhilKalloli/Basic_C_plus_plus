#include <iostream>
using namespace std;

// Base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 589;
    }

    Employee() {}
};

// Derived class syntax
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
};



NOTE:
1.Default vivibility mode is private.
2.Public visibility mode: Public members of the base class becomes Public members of the derived class.
3.Private visibility mode: Public members of the base class becomes Private members of the derived class.
4.Private members are never Inherited

*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 777;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee nikhil(1), harry(2);

    cout << nikhil.salary << endl;
    cout << harry.salary << endl;
    Programmer skillf(90);
    cout << skillf.languageCode << endl;
    cout << skillf.id << endl;
    skillf.getData();
    return 0;
}