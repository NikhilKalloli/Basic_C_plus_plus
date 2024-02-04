#include <iostream>
using namespace std;

int main()
{
    int marks[] = {23, 45, 14, 65};

    // int mathMarks[4];
    // mathMarks[0] = 487;
    // mathMarks[1] = 756;
    // mathMarks[2] = 75;
    // mathMarks[3] = 56;
    // mathMarks[4] = 565;

    // // You can change the value of the array
    // marks[2] = 999;
    // cout << "These are marks" << endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // cout << "These are math marks" << endl;
    // cout << mathMarks[0] << endl;
    // cout << mathMarks[1] << endl;
    // cout << mathMarks[2] << endl;
    // cout << mathMarks[3] << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    // }

    // Pointers and Arrays
    int *p=marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<"The value of *(p) is   "<<*(p)<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    cout<<"The value of *(p+4) is "<<*(p+4)<<endl;

    return 0;
}