#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

/*
For a protected member:
              public derivation  private derivation  protected derivation
  1.private member    Not Inherited Not Inherited Not Inherited
  2.protected   Protected  Private  protected
  3.public       Public  Private  Protected
*/

class Derived : protected Base
{
};
int main()
{

    Base b;
    Derived d;
    // cout<<b.a;// Will not work since a is protected in both base as will as derived class
    return 0;
}