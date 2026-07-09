#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }

    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called !!" << endl;
        a = obj.a;
    }
    void Display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(45), z2;
    x.Display();
    y.Display();
    z.Display();

    Number z1(z); // Copy constructor invked
    z1.Display();

    z2 = z; // Copy constructor not called
    z2.Display();

    Number z3 = z;
    z3.Display();

    // z1 should exalty resamble z or x or y

    return 0;
}