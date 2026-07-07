#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is(" << x << ", " << y << ")" << endl;
    }
};

// Create a function (Hint: Make it a friend function) which take 2 point object and computer tne distance between those 2 point

// Use this example to check your code:
// Distance between (1, 1) and (1,1) is 0
// Distance between (0, 1) and (0, 6) is 5
// distance between (1, 0) and (70, 0) is 69
int main()
{
    point p(1, 1);
    p.displayPoint();

    point q(4, 6);
    q.displayPoint();

    return 0;
}