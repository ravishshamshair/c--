#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    // Not recommended to use below line with inline functions
    // static int c=0; //this exectues only once
    // c= c + 1; //Nexy time this function is run the value of c will be retaiend
    return a * b;
}
float moneyRecevied(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}
int main()
{
    int a, b;
   // cout << "Enter the valu of a and b" << endl;
   // cin >> a >> b;
    //  cout<<"The product of a and b is "<<product<<(a,b)<<endl;
    int money = 100000;
    cout << "If you have " << "Rs in your bank account, you will recive "<<moneyRecevied(money)<<"Rs after one yrear old";
cout<<"For VIP: If you have "<<money<<"Rs in you bank acount, ypu will recive "<<moneyRecevied(money, 1.1)<<"Rs after one year old";


        return 0;
}
