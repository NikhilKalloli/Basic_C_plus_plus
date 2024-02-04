#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {

        cout << "The id of this Employeee is " << id << " And this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; // This throws an error as it has Access to only static Variables
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count ;// Default value is 0

int main()
{
    Employee nikhil, harry, stephan;
    // nikhil.id=1;
    // nikhil.count=1;// Cannot do this as id and count are private
    nikhil.setData();
    nikhil.getData();
    Employee::getCount();// Function used without the name of object

    harry.setData();
    harry.getData();
    harry.getCount();   // Function used by the the name of object

    stephan.setData();
    stephan.getData();
    Employee::getCount();
    return 0;
}