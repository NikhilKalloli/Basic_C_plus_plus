#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    friend Point distance(Point p, Point q);
    Point(void){};
    int distance(Point p, Point q);
};

int Point::distance(Point p, Point q)
{
    int pq;
    pq = sqrt((q.x - p.x) * (q.x - p.x) + (q.y - p.y) * (q.y - p.y));
    return pq;
}

int main()
{
    Point p(1, 7);
    Point q(5, 4);
    cout << "Distance is " << p.distance(p, q) << endl;
    cout << "Distance is " << q.distance(p, q) << endl;

    return 0;
}