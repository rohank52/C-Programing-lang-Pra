
#include<iostream>
using namespace std;

//recrusin function 
void print(int n ) {
    //Base case
    if(n==0) 
    return ;

    cout<<n<<" ";
    //recursion call
    print(n-1);
}

int main() 
{
int n;
cout<<"Printing the value of n"<<endl;
cin>>n;

cout<<"Printing in Decricing order "<<endl;
//function call
print(n);
 
}