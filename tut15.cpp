#include <iostream>
using namespace std;

//Function Prototype
// type function-name(arguments)
//int sum(int a , int b);  // ---->> Acceptable
int sum(int  , int );  // ---->> Acceptable
//int sum(int a , b );  // ---->> Not Acceptable
// void g(void);
void g();

int main()
{
    int num1,num2;
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    // num1 and num2 are actual parameters
    g();

    
    return 0;
}

int sum(int a,int b)
{
    // Formal parameters a and b will be taking value from actual parameters num1 and num2
   int c =a+b;
   return c;
}

void g()
{
    cout<<"\nHello, Good Morning";
}