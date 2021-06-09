//Write a C program to check whether a given number is amstrong or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void am(int);

int main() {
int n;
    scanf("%d",&n);
    am(n);
       
    return 0;
}
void am(int n)
{
    int q=n, count=0,result=0,multi=1, c,rem;
    
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    c=count;
    q=n;
    
    while(q!=0)
    {
        rem=q%10;
        while(c!=0)
        {
            multi=multi*rem;
            c--;
        }
        result=result+multi;
        c=count;
        q=q/10;
        multi=1;
    }
    if(result==n)
    {
        printf("Amstrong");
    }
    else
    {
             printf("Not Amstrong");
    }
}
