#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // int a=87;
    // cout<<"The value of a was:"<<a<<endl;
    //  a=5;
    // cout<<"The value of a is:"<<a<<endl;
  
    // ************Constants in C++**************
    // const int a= 7;
    // cout<<"The value of a is"<<a<<endl;
    // a =5; // You'll get an error because a is a constant
    // cout<<"The value of a is"<<a<<endl;
    

    //****************Manipulators in C++****************
 /* int a=4,b=64,c=4873;
  cout<<"The value of a without setw is:"<<a<<endl;
  cout<<"The value of b without setw is:"<<b<<endl;
  cout<<"The value of c without setw is:"<<c<<endl;

  cout<<"The value of a with setw is:"<<setw(4)<<a<<endl;
  cout<<"The value of b with setw is:"<<setw(4)<<b<<endl;
  cout<<"The value of c with setw is:"<<setw(4)<<c<<endl;
*/

   //**********Operator Precedence**************
   int a=3,b=7;
   int c=((((a*5)+b)-75)+87);
   cout<<c;




    return 0;
}
