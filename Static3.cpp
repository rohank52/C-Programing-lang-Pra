

//22/9//23
//static cocept of c++ 


#include<iostream>
using namespace std;
class Demo
{  
    public :
    int i;          //non static chararistris
    int j;
     static int k;       //static charatritsss (lonach)

    Demo (int a = 10,int b = 20)     //paramertrise const with default arguments...

    {
   // int i ;
    //int j;
    i = a;
    j = b;

    }
    void Display()   //non static ahe sagal access karate
    { 
        cout<<"Inside non static method Dispaly\n";

        cout<<"Value of i "<<i<<"\n"; 
        cout<<"Value of j "<<j<<"\n";
        cout<<"Value of k"<<k<<"\n";


    }
    static void Fun() //vati static ahe only static accesss karate 
    
    {
       cout<<"Inside static method Fun \n";
       cout<<"Value of k "<<k;

    }
};
int Demo ::k = 111;                   //static variable inilisize karach asel tr asa kara lagate

int main() 
{  
    
 cout<<"Value of k is : "<<Demo::k<<"\n";
 Demo::Fun();

 Demo obj1(11,21);
 Demo obj2(51,101);
 Demo obj3(121,151);
  

  cout<<"Size of object is : "<<sizeof(obj1)<<"\n";


  obj1.Display();
  obj2.Display();
  obj3.Display();



  

    return 0;

}

//non static instand vari 
//statci   class varible ...class cha varible 


