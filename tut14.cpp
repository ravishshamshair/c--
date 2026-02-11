#include <iostream>
using namespace std;

typedef struct Emloyee

{
    /* data */
    int eId;
    char favChar;
    float salary;

} ep;

int main(){
    enum meal{ breakfast, lunc, dinner};
    meal m1 = lunc;
    cout<<(m1 == 1)<<endl;
    //cout<<breakfast<<endl;
    //cout<<lunc<<endl;
    //cout<<dinner<<endl;

    // union mony m1;
    //m1.rice = 34;
    // m1.care = 'c';

//ep ravish;
  //ep atizaz;
  //ep ali;
    //ravish.eId = 1;
   // ravish.favChar = 'r';
   // ravish.salary = 1200000000;

   // cout<<"the value is "<<ravish.eId<<endl;
   // cout<<"the value is "<<ravish.favChar<<endl;
   // cout<<"the value is "<<ravish.salary<<endl;


    return 0;


}