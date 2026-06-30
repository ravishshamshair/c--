#include<iostream>
using namespace std;

class Employe{
    int id;
    int salary;

public:
    void set(void){
        salary = 122;
        cout << "Enter the Id of employee" << endl;
        cin >> id;
    }

    void getId(){
        cout << "The id of this employee is " << id << endl;
    }
};

int main(){
    Employe fb[4];

    for (int i = 0; i < 4; i++)
    {
        fb[i].set();
        fb[i].getId();
    }

    return 0;
}