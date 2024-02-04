#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 6)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

void Simple ::printData(void)
{
    cout << "The value of data1, data2 and data3 is " << data1 << " ," << data2 << " and " << data3 << endl;
}

int main()
{
    Simple s(2);
    s.printData();
    return 0;
}