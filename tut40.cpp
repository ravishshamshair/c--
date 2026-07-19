#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << "The roll number is" << roll_number << endl;
}

class Exam : public student
{
protected:
    float math;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float m1, float m2)
{
    math = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << math << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class Results : public Exam
{
    float precentage;

public:
    void Display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (math + physics) / 2 << "%" << endl;
    }
};

int main()
{
    /*
    Notes:
    If we are inheritinga B from A and C from B:[A----> B---->---->C ]
    1.Ais the base class for B and B is the base class for C
    2. A---->B----->----C is called Inheritance path
    */
   
    Results Ravish;
    Ravish.set_roll_number(420);
    Ravish.set_marks(94.0, 90.0);
    Ravish.Display_results();
    return 0;
}