#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;

    // Selection control structure:if-else ladder
    /*if (age<18)
    {
        cout<<"You cannot come to my party";
    }
    else if(age==18)
    {
       cout<<"You can get a kid's pass";
    }
    else{
        cout<<"You can come to my party";
    }
            */

    // Selection control structure: Switch case statements
    switch (age)
    {
    case 18:
        cout << "Your age is 18" << endl;
        break;
    case 22:
        cout << "Your age is 22" << endl;
        break;

    case 36:
        cout << "Your age is 36" << endl;
        break;

    default:
        cout << "Nothing special about it" << endl;
        break;
    }

    return 0;
}