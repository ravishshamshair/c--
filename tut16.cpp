#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
// this will not swap a and b
void swap (int *a, int *b){ //temp a  b
    int temp = *a;         //4    4  5
    *a =*b;                 //4    5  5
    *b = temp;             //4    5  4
   
}
// call by reference using reference variable

//call by reference using C++ reference variable
// int &
void swapReferenceVar (int &a, int &b){ //temp a  b
    int temp = a;         //4    4  5
    a =b;                 //4    5  5
    b =temp;             //4    5  4
    //return a;

}

int main(){
    int x =4, y=5;
    //cout<<"The sum of 4 and 5 is" <<sum(4,5)<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    //swap(x, y); // this will  not a and b
   // swapPointer(&x, &y); //this will swap a and b using pointers
   swapReferenceVar(x, y); //this will swap a and b using reference variables
  // swapRefrenceVar(x,y) =786; //this will swap a and b using reference variable
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0;

}