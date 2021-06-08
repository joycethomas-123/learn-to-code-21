//Write a C program to input two numbers.If sum of the numbers is even, find the reverse of the sum .If sum is odd check whether the sum is prime or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sum(int,int);


    
int main() {
int a,b;
    scanf("%d%d",&a,&b);
 sum(a,b);
       
    return 0;
}
void sum(int a,int b)
{
    int plus,i,p=0;
    int rev = 0, remainder;
    plus=a+b;
    printf("%d\n",plus);
   if(plus % 2==0)
    {
        while(plus != 0) {
        remainder = plus % 10;
        rev = rev * 10 + remainder;
        plus/= 10;
        }
       
    printf("%d",rev);
}
    else{
        for(i=1; i<=plus; i++)
   {
      if(plus%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf("Prime");
   }
   else
   {
      printf("Not prime");
   }
    
}
}
