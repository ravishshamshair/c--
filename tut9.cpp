#include <iostream>
using namespace std;

int main() {

    int age;
    cout << "Tell me your age: ";
    cin >> age;

    // selection control structure: switch statement
     //cout<<"this is tutorial 9"<<end1;
   
    
    //selection control structure
   // if(age < 18) && (age > 0)){
     //   cout<<"You can not come to my party"<<endl;
    //}
    //else if(age==18){
       // cout<<"You are a kid and you will get a kid pass"<<endl;
        //}
        //else{
          //  cout<<"You can come to my party"<<endl;

        //}  
        //selection control structure:swith statement
    switch (age) {
        case 18:
            cout << "you are 18";
            break;

        default:
            cout << "age is not 18";
            break;
    }

    return 0;
}  
