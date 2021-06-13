//calendar

#include <stdio.h>
#include<conio.h>
#include<string.h>

//Compiler version gcc  6.3.0

int main()
{
  int mondate[]={31,28,31,30,31,30,31,31,30,31,30,31},i,a;
  char *moname[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
  char *day[]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
  char *fd="SUN";
  
  for(i=0;i<7;i++)
  {
    if(!strcmp(day[i],fd))
    {
      a=i+1;
      break;
    }
  }
 
 for(int j=0;j<12;j++)
 {
   printf("\n\n\n       %s 2021 \n\n",moname[j]);
   printf("Sun Mon Tue Wed Thu Fri Sat\n");
   
   for(i=1;i<mondate[j]+a;i++)
   {
     if(i<a)
     {
       printf("    ");
     }
     else
     {
  printf("%3d ",i-a+1);
      }
   if(i%7==0)
    {
  printf("\n");
    }
   }
 
  a=i%7;
  getch();
  }
  return 0;
}
