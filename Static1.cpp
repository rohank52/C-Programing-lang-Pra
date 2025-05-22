

//22/9//23
//static cocept of c++ 


#include<iostream>
using namespace std;
class Demo
{  
    public :
    int i;
    int j;

    Demo (int a = 10,int b = 20)//paramertrise const with default arguments...

    {
   // int i ;
    //int j;
    i = a;
    j = b;

    }
    /*
    Demo()
    {}*/

    

    void Display()
    {
        cout<<"Value of i "<<i<<"\n"; 
        cout<<"Value of j "<<j<<"\n";

    }

};

int main() 
{  
  Demo obj1;
  obj1.Display();

  Demo obj2(11);
  obj2.Display();

  Demo obj3(51,101);
  obj3.Display();

  

    return 0;

}