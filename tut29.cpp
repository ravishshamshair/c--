#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a Construction
    // Construction is a spacial member function with the same number as of the class.
    // It is used to iniialize the objec the class
    // It is automatically invoke whenever an object is created

    complex(void); // Construction declaration
    void printNumber()
    {
        cout << "your Number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)//-------This is a defaut construction as it take no paramaters

{
    a = 10;
    b = 0;
   // cout<<"Hellow word";
};
int main()
{
    complex c;
    c.printNumber();
    return 0;
}
/*characteristic of constructros
1.It should be declared in the public section of the class
2.They are automatically invoked whenever the object is created
3.They cannot return value and do not have return type
4.It can have default argument
5.We cannot refer to their address
*/