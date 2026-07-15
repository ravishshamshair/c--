#include <iostream>
using namespace std;

// Base Class
class Employe
{

public:
    int Id;
    float salary;
    Employe(int inpId)
    {
        Id = inpId;
        salary = 34.0;
    }
    Employe() {}
};

// Derived class syntax
/*
Class{{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
     class member/method/etc...
}
     Note:
1. Default visibility node is private
2.Public visibility mode : public member is the base class become public member of the derived class
3.Private visibility mode : public member is the base class become private member of the derived class
4.Private member are never inherited
*/

// Creating a programmer class derived from Employr base class
class programmer : Employe
{
public:
    programmer(int inpId)
    {
        Id = inpId;
    }
    int languagecode = 9;
    void getData(){
        cout<< Id <<endl;

    }
};
int main()
{
    Employe ravish(1), at(2);
    cout << ravish.salary << endl;
    cout << at.salary << endl;
    programmer skillF(10);
    cout << skillF.languagecode << endl;
    skillF.getData();
    return 0;
}