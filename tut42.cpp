#include <iostream>
#include <cmath>
using namespace std;

/*
Create 2 classes:
    1.Simple Calculator -- Takes input of two numbers using a utility function and performs +,-,*,/ and displays the results using another function.
    2.Scientific Calculator--Takes input of two numbers using a utility function and perform any four scientific operation of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of inheritance  are you using?
    Q2. Which mode of inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
class SimpleCalculator
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter two number" << endl;
        cin >> a >> b;
    }

    void display(void);
};

void SimpleCalculator ::display(void)
{
    cout << "a + b is " << a + b << endl;
    cout << "a - b is " << a - b << endl;
    cout << "a / b is " << a / b << endl;
    cout << "a * b is " << a * b << endl;
}

class ScientificCalculator
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter two number" << endl;
        cin >> a >> b;
    }

    void display(void);
};

void ScientificCalculator ::display(void)
{
    cout << "log of " << a << " + " << b << " is " << log(a + b) << endl;
    cout << "sin of " << a << " is " << sin(a) << endl;
    cout << "cos of " << a << " is " << cos(a) << endl;
    cout << "sin of " << b << " is " << sin(b) << endl;
    cout << "cos of " << b << " is " << cos(b) << endl;
}

class HybridCalculator : virtual public SimpleCalculator, virtual public ScientificCalculator
{
public:
    int n;
    void op()
    {
        cout << "Enter 1 to operate Simple Calculator" << endl;
        cout << "Enter 2 to operate Scientific Calculator" << endl;
        cin >> n;
    }

    void dis()
    {

        if (n == 1)
        {
            SimpleCalculator::getData();
            SimpleCalculator::display();
        }
        else

        {
            ScientificCalculator::getData();
            ScientificCalculator::display();
        }
    }
};

int main()
{
    HybridCalculator h1;
    h1.op();
    h1.dis();

    return 0;
}