
#include<stdio.h>

#include<stdlib.h>   //malloc calloc relloac free sadhi keli ahe 


int main () 
{
    


     int  iSize = 0;
     int *ptr = NULL; 
     printf("Enter the size of arry : \n");
     scanf("%d",&iSize);
     
     ptr = (int *) calloc (iSize , sizeof(int));   //malloc dili hoti 

     ptr [0] =10;
     ptr[1] = 11;
     ptr[2] = 12;

     free(ptr);   // kadali free ne 
     


     return 0;
}

//void * malloc(int size);
