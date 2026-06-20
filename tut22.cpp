#include <iostream>
#include <string>
using namespace std;

class binary
{
    private:
        string s;
          void chk_bin(void);

    public:

    void read(void);
    void ones(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            return;
        }
    }

    cout << "Correct binary format" << endl;
}

void binary::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
    cout << "One's complement of your binary number is : " << s << endl;
}

void binary::display(void)
{
    chk_bin();
    cout << "Displaying your binary format: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;

    b.read();
    //b.chk_bin();
    b.display();

    b.ones();
    b.display();

    return 0;
}