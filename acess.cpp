

#include<iostream>

using namespace std;

class Demo
{
        int i; 
    public: 
       int j;
   private:
       int k;
  protected:
      int a;
       public:
          Demo()
          {
              i=10;
              j=20;
              k=30;
              a=40;
           } 
           void Display()
           {
            cout<<"Value of i: "<<i<<"\n";  //a
            cout<<"Value of j:"<<j<<"\n";   //a
            cout<<"Value of k: "<<k<<"\n";   //a
            cout<<"Value of a :"<<a<<"\n";  //a

           }



}; 
class Hello : public Demo {  
    public:
       void HelloDisplay()
       {
       // cout<<"Value of i: "<<i<<"\n"; //na
        cout<<"Value of j: "<<j<<"\n";  //a
       // cout<<"Value of k :"<<k<<"\n";   //na
        cout<<"Value of a: "<<a<<"\n";   //a
       }

};

int main() 
{ 
  Hello hobj;
  hobj.HelloDisplay();
    //Demo obj; 
  // cout << "Value of i: "<<obj.i<<"\n"; //na
  // cout<<"Value of j :"<<obj.j<<"\n";    //a
  // cout<<"Value of k: "<<obj.k<<"\n";  na
//cout<<"Value of a : "<<obj.a<<"\n";  //na

//obj.Display();  //  OBJ Addresss janar ahe...
    return 0;
}