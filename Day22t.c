//Write a C program that reads and displays details of 4 students. The 'structure' should contain the RollNo(int), FirstName(string) and marks(float).

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


struct stud
{
    int Rollno;
    char FirstName[200];
    float marks;

}s[4];

int main() {
    int i;
    for(i=0;i<4;i++)
    {
        scanf("%d",&s[i].Rollno);
        scanf("%s",&s[i].FirstName);
        scanf("%f",&s[i].marks);
        
    }
    for(i=0;i<4;i++)
    {
        if(s[i].Rollno>0 && s[i].Rollno<=100 && s[i].marks>0.00 && s[i].marks<=100.00)
        {
            printf("DETAILS OF ROLLNO %d\n",s[i].Rollno);
            printf("NAME: %s\n",s[i].FirstName);
            printf("MARKS: %.2f\n",s[i].marks);
        }
    }

     
    return 0;
}

    
        
