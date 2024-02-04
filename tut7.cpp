#include <iostream>
using namespace std;
int c=64;
int main()
{
    //**********Built in Data types*************
    /*int a, b, c;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "The value of a+b is :" << c<<endl;
    cout << "The global c is :" <<:: c;
    */

  //********Float,double amd long double Literals ************
/*
    float d =35.9f;//f is for float,and its optional to write
    long double e = 35.9l;//l is for long double and its optional to write
    //35.9  ---> By default our complier considers it as double 
    //35.9f ---> Now we have manupliated it as float using 'f'.
    cout<<"The size of 35.9  is "<<sizeof(35.9)<<endl;
    cout<<"The size of 35.9f is "<<sizeof(35.9f)<<endl;
    cout<<"The size of 35.9F is "<<sizeof(35.9F)<<endl;
    cout<<"The size of 35.9l is "<<sizeof(35.9l)<<endl;
    cout<<"The size of 35.9L is "<<sizeof(35.9L)<<endl;


    cout<<"The value of d is:"<<d<<endl<<"THe value of e is :"<<e;

*/

//***********Referance Varaibles****************
//Rohan---->Rohu---->Dangerous coder-------->Rohanuuu
// float x=455;
// float &y=x;
// cout<<x<<endl;
// cout<<y<<endl;


//***************Typecasting**************
int a1=45;
float b1 = 45.464;
cout<<"The value of a1 is "<<(float)a1<<endl;
cout<<"The value of a1 is "<<float(a1)<<endl;
cout<<"The value of b1 is "<<(int)b1<<endl;
cout<<"The value of b1 is "<<int(b1)<<endl;
int c= int(b1);


cout<<"the expression is "<<a1+b1<<endl;
cout<<"the expression is "<<a1+int(b1)<<endl;
cout<<"the expression is "<<a1+(int)b1<<endl;

    return 0;
}