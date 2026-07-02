#include <iostream>
using namespace std;

// 1 + 4i;
// 5 + 8i;
// --------
class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // below line means that non member - sumcomplex function is allowed to do anything with my private parts (members)
    friend complex sumcomplex(complex o1, complex o2);
    void printNumber()
    {
        cout << "your Number is " << a << " + " << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumcomplex(c1, c2);
    sum.printNumber();
    return 0;
}
/* proterties of friend function
1.Not in the scope of class
2. since it is not in the scope of class, it can be called from the object of that class. c1.sumcomplex() == Invalid
3. can be invoked without the help of any object
4. usually contains the object as arguments
5. can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.members_name to access any members


*/
