
#include<stdio.h>

#include<stdlib.h>

int main () 
{
     int Arr[5] ;        //static mamory
     float fValue;        //static memory
     double Brr [4] ;     //static menroy 


     int  iSize = 0;
     int *ptr = NULL; 
     printf("Enter the size of arry : \n");
     scanf("%d",&iSize);
     
     ptr = (int *) malloc (iSize * sizeof(int));   //malloc dili hoti 

     ptr [0] =10;
     ptr[1] = 11;  
     ptr[2] = 12;   

     free(ptr);   // kadali free ne 
     


     return 0;
}