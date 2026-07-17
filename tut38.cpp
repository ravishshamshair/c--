#include <iostream>
using namespace std;

class Base
{
protected:
    int data1;

public:
    int data2;

    void setData();
    void getData1();
    void getData2();
};

void Base::setData()
{
    data1 = 10;
    data2 = 20;
}

void Base::getData1()
{
    cout << "Value of data1 is " << data1 << endl;
}

void Base::getData2()
{
    cout << "Value of data2 is " << data2 << endl;
}

class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
};

void Derived::process()
{
    data3 = data1 * data2;
}

void Derived::display()
{
    getData1();
    getData2();
    cout << "Value of data3 is " << data3 << endl;
}

int main()
{
    Derived d;

    d.setData();
    d.process();
    d.display();

    return 0;
}