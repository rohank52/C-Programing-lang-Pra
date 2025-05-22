
#include<iostream>

using namespace std;

class Demo //class Defination
{
    public : //Access spcifier
    int i;    //charastricttc
    int j;

    Demo ()//default constructor

    { 
        cout<<"Inside default contructor\n";
        i = 0;
        j = 0;


    } 
    //int A = 11;
    //int B = 21;  
    Demo (int A, int B )//parametrised Construtor
    {
     cout<<"Inside parametrised constructor\n";
     i = A;
     j = B;
    }
       //demo &ref = obj2;
    Demo (Demo &ref) //copy constrorr
    {
        cout<<"Inside copy constructor\n";
        i = ref.i;
        j = ref.j;

    }

    ~Demo() // ~ ulata kam kartoy ...
    {
        cout <<"Inside Destructor\n";
    }


};
int main ()
{ 
    Demo obj1;

    Demo obj2(11,21);

    Demo obj3(obj2); 
    return 0;
}