//Write a C program to find the factorial of a given number using a recursive function

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int fact(int);
int main()
{
    int n;
  
    scanf("%d",&n);
     if(n<1)
       printf("ERROR");
    else 
        printf("%d",fact(n));
    return 0;
}
int fact(int n)
{
    if(n>=1)
        
    return(n*fact(n-1));
    else
        return 1;
}
    

