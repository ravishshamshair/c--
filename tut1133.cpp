#include <iostream>
using namespace std;

    class shop{
        int itrmId{100};
        int itemPtice{100};
        int counter;
        public:
        void initcounter(void) { counter =0;}
        void getPrice(void);
        void setPrice(void);
    };

    void Shop :: getPrice(void)
    {
        cout<<"Enter Id of your item"<<endl;
        cin>>itemId[counter];
    }
int main(){

    return 0;

}