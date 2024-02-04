#include <iostream>
using namespace std;

// /*typedef*/ struct employee
// {
//     int eId;
//     char favchar;
//     float salary;
// }ep;

union money
{
    int rice;     // 4
    char car;     // 1
    float pounds; // 4
};

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        Dinner
    };
    Meal m1 = breakfast;
    cout << m1;
    //    cout<<breakfast<<endl;
    //    cout<<lunch<<endl;
    //    cout<<Dinner<<endl;

    /*union money m1;
    m1.rice = 647;
    cout << "THe value of Rice is " << m1.rice << endl;
    m1.car = 't';
    cout << "THe value of Car is " << m1.car << endl;
*/

    // struct employee nikhil;
    // ep harry;
    // nikhil.eId = 5;
    // nikhil.favchar = 'c';
    // nikhil.salary= 120000000;

    // cout<<"The salary is "<<nikhil.salary<<endl;
    // cout<<"The favorate character is "<<nikhil.favchar<<endl;
    // cout<<"The eId is "<<nikhil.eId<<endl;

    return 0;
}