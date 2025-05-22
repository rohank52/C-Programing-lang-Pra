#include <iostream>

using namespace std;

class Demo
{    
    public:
        int x,y;
    
        Demo()
        {
            cout<<"Inside Demo constructor\n";
            x = 10;
            y = 20;
        }
    
        ~Demo()
        {
            cout<<"Inside Demo destructor\n";
        }
    
        void fun()
        {
            cout<<"Inside Fun of Demo\n";
        }
};

class Hello
{
    public:
        int a,b;

        Hello()
        {
            cout<<"Inside Hello constructor\n";
            a = 30;
            b = 40;
           // c = 50;
        }

        ~Hello()
        {
            cout<<"Inside Hello destructor\n";
        }

        void gun()
        {
            cout<<"Inside gun of hallo\n";
        }
};

class Marvellous : public Hello, public Demo
{
    public:
        int p;

        Marvellous()
        {
            cout<<"Inside constructor of Marvellous\n";
        }

        ~Marvellous()
        {
            cout<<"Inside Destructor of Marvellous\n";
        }

        void sun()
        {
            cout<<"Inside sun of Marvellous\n";
        }
};


int main()
{
    Marvellous hobj;

    cout<<sizeof(hobj)<<endl;

    hobj.fun();
    hobj.gun();
    hobj.sun();

    return 0;
}