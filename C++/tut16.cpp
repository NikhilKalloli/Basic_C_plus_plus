#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b)
{
                  // temp  a  b
    int temp = a; //  4    4  5
    a = b;        //  4    5  5
    b = temp;     //  4    5  4
}

// Call by Referance using pointers
void swapPointer(int *a, int *b)
{
                  // temp  a  b
    int temp = *a; //  4    4  5
    *a = *b;       //  4    5  5
    *b = temp;     //  4    5  4
}

// Call by Referance using C++ Referance Variables
void swapReferenceVar(int &a, int &b)
{
                  // temp  a  b
    int temp = a; //  4    4  5
    a = b;        //  4    5  5
    b = temp;     //  4    5  4
}


// Call by Referance using C++ Referance Variables
//int & 
// void swapReferenceVar(int &a, int &b)
// {
//                   // temp  a  b
//     int temp = a; //  4    4  5
//     a = b;        //  4    5  5
//     b = temp;     //  4    5  4
//     return a;
// }

int main()
{
    int x = 4, y = 5;
    cout << "The sum of 4 and 5 is " << sum(x, y) << endl;
    cout<<"The value of x is "<<x<<" And the value of y is "<<y<<endl;
    //swap(x,y);//This will not swap a and b
    //swapPointer(&x,&y);//  This will swap a and b using pointer referance
    swapReferenceVar(x,y);// This will swap a and b using Referance Variables
    // swapReferenceVar(x,y)=789;
    cout<<"The value of x is "<<x<<" And the value of y is "<<y<<endl;
    return 0;
}
