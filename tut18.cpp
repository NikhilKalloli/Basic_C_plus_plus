#include <iostream>
using namespace std;

int factorial(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {

        return n * factorial(n - 1);
    }
}

 int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}

// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3);
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

int main()
{
    // Factorial of a number:
    // 6! = 6*5*4*3*2*1 =720
    // 0!=1 by defination
    // 1!=1 by defination
    // n!=n*(n-1)!
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    // cout << "The factorial of " << n << " is " << factorial(n) << endl;
    cout << "The term in fibonacci series at position " << n << " is " << fib(n) << endl;
    return 0;
}