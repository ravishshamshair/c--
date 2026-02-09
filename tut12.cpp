#include <iostream>
using namespace std;

int main(){
    /*what is the pointer? ----> data types which holds the address of other 
    data types*/

    int a=3;
    int* b=&a;
    // & --->(Adress of)operator
    cout<<"the address of a is" <<&a<<endl;
    cout<<"the address of b is" <<b<<endl;

    // *--->(Value at)operator
    cout<<"the value at address b is" <<*b<<endl;

    // pointer to pointer
    int** c=&b;
    cout<<"the address of b is" <<&b<<endl;
    cout<<"the address of b is" <<c<<endl;
    cout<<"the value at address-value at(value-at(c))is" <<**c<<endl;
    

    return 0;

    
}