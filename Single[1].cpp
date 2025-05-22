#include <iostream>  

//single level inherintnace conceptss in c++ reusebity hai 

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

// class hello extends Demo
class Hello :

 public Demo

{
    public:
        int a,b,c;

        Hello()
        {
            cout<<"Inside Hello constructor\n";
            a = 30;
            b = 40;
            c = 50;
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
    
int main()
{  
    Hello hobj; 

    // cout<<sizeof(hobj)<<endl;  

    cout<<hobj.x<<"\n";
    cout<<hobj.y<<"\n";
    cout<<hobj.a<<"\n";
    cout<<hobj.b<<"\n";
    cout<<hobj.c<<"\n";

    return 0;
}