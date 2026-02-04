// there are two types of header files
// 1. system header files: it comes with the compiler
#include<iostream>
// 2. user defined header files: it is written by the programmer
//#include"this.h" // this will produce and error if this file is not present in the current directory

using namespace std;

int main(){
    int a=4, b=5;
    cout<<" operation in c++:" <<endl;
    cout<<"following are the types of operations in c++:" <<endl;
    // Arithmetic operations
    cout<<"The value of a + b is " <<a+b <<endl;
    cout<<"The value of a - b is " <<a-b <<endl;
    cout<<"the value of a*b is"<<a*b<<endl;
    cout<<"the value of a/b is"<<a/b<<endl;
    cout<<"the value of a%b is"<<a%b<<endl;
    cout<<"the value of a++ is"<<a++<<endl;
    cout<<"the value of a-- is"<<a--<<endl;
    cout<<"the value of ++a is"<<++a<<endl;
    cout<<"the value of --a is"<<--a<<endl;
cout<<endl;
//Assigment operators -->used to assing values to variables
//int a=3, b=9;
//char d='d';

//comparision operations
cout<< "Follwing are the comparision operations in c++:" <<ends;
cout<<"the value of a==b is"<<(a==b)<<endl;
cout<<"the value of a!=b is"<<(a!=b)<<endl;
cout<<"the value of a>=b is"<<(a>=b)<<endl;
cout<<"the value of a<b is"<<(a<b)<<endl;
cout<<"the value of a>b is "<<(a>b)<<endl;
cout<<"the value of a<=b is"<<(a<=b)<<endl;

//logical operators
cout<< "following are the logical operations in c++:"<<endl;
cout<< "the value of logical and operation a&&b is "<<((a==b) && (a<b))<<endl;
cout<< "thevalue of logical or operation a||b is"<<((a==b) || (a<b))<<endl;
cout<< "the value of logical not operation !a is"<<(!(a==b))<<endl;

    return 0;

}