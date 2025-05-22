

#include<iostream>

using namespace std;

class Base 
{
    public :
    int i,j,k;

    void fun() 
    {
        cout<<"Base fun\n";
    }
    virtual void gun()
    {
        cout<<"Base gun\n";
    }
    virtual void Addition(int no1,int no2) = 0;//abstract method



}; 
class Derived : public Base 
{
    public :
    int a,b;
    void gun()  //
    {
        cout<<"Derived gun\n";
    }
    virtual void sun() 
    {
        cout<<"Derived sun\n";

    }
    int Addition (int no1,int no2)//concreate method
    {
        return no1 + no2;
    }  
};  

int main () 
{  
   // Base bobj; ardavat 

    Base *bp = new Derived;
    bp->fun();
    bp->gun();
    int Ret = 0;
    Ret = bp-> Addition(10,11);
    cout<<"Addition is : "<<Ret <<"\n";

}