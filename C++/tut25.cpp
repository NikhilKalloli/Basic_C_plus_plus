#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 785;
        cout << "Enter Id of Employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this Employee is " << id << endl;
    }
};

int main()
{
    // Employee nikhil, harry, james, trevor;
    // nikhil.setId();
    // nikhil.getId();

    Employee fb[4];
    // fb[0].getId();
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}
