#include <iostream>
using namespace std;

class employe
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employe is " << id << "and this is employe number " << count << endl;
    }
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};
// count is the static data member of class employe
int employe::count = 0; // default value is 0;
int main()
{
    employe ravish, at, ali;
    // ravish.id = 1;2

    // ravish.count=1; //cannot do this as id and count are private

    ravish.setData();
    ravish.getData();
    employe::getcount();

    at.setData();
    at.getData();
  employe::getcount();

    ali.setData();
    ali.getData();
      employe::getcount();
    return 0;
}
