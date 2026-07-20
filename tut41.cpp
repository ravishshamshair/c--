#include <iostream>
using namespace std;

/*
syntax for inheriting in multiple inheriting
class DerivedC: visiblity-mode base1, visiblity-mode base2
{
Class body of class "Derivedc"

};
*/
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int c)
    {
        base3int = c;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of base1 is " << base1int << endl;
        cout << "The value of base2 is " << base2int << endl;
        cout << "The value of base3 is " << base3int << endl;
        cout << "The sum of his value is " << base1int + base2int + base3int << endl;
    }
};
/*
The inherited derived class will look something like this:
    Data members:
    base1int ----> protected
     base2int ----> protected

     Members function:
     set.base1int()----->public
     set.base2int()----->public
     set_show()---->public
     */
int main()
{
    Derived Ravish;
    Ravish.set_base1int(25);
    Ravish.set_base2int(5);
    Ravish.set_base3int(15);
    Ravish.show();
    return 0;
}