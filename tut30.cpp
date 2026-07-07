#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); // Construction declaration
    void printNumber()
    {
        cout << "your Number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y) //-------This is a parameterized construction as it take 2 paramaters

{
    a = x;
    b = y;
    // cout<<"Hellow word";
}
int main()
{
    // implicit call
    complex a(4, 6);

    // Explicit call
    complex b = complex(5, 7);
    a.printNumber();
    b.printNumber();

    return 0;
}