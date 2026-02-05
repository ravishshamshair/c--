#include <iostream>
using namespace std;

int c = 45;

int main() {

    //***********build in data types**************
    //int a, b, c;
    //cout << "enter the value of a: " << endl;
    //cin >> a >> b;
    //c = a + b;
    //cout << "the value of b: " << c << endl; 
    //cin>>b;
    //c = a + b;
    //cout<<"the sum is "<<c<<endl;
    //cout<<"the golbal c is "<<::c<<endl;
//*************** float, double and long double literals***************

//    float d = 34.4f;
  //  long double e = 34.4L;
    //cout<<"the size of 34.4 is " <<sizeof(34.4)<<endl;
   // cout<<"the size of 34.4f is"<<sizeof(34.4f)<<endl;
  //  cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
  //   cout<<"the size of 34.4f is "<<sizeof(34.4l)<<endl;
  //   cout<<"the size of 34.4L is"<<sizeof(34.4L)<<endl;
  //   cout<<"the size of 34.4L is"<<sizeof(34.4L)<<endl;

    //***************reference variables****************
    // Rohan Das ----> -----> ------> Monty-------> dangerous coder
  //  float x = 455;
//float & y = x;
//cout<<x<<endl;
//cout<<y<<endl;

//************* typecasting******************
int a =45;
float b =45.46;
cout<<"the value of a is "<<(float)a<<endl;
cout<<"the value of a is "<<float(a)<<endl;

cout<<"the value of b is "<<(int)b<<endl;
cout<<"the value of b is "<<int(b)<<endl;
int c = int(b);

cout<<"the expression is"<<a + b <<endl;
cout<<"the expression is"<<a + int(b)<<endl;
cout<<"the expression is"<<a + (int)b<<endl;
    
    return 0;  
    
}
