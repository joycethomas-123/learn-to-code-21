//Write a C program to count and display the number of Vowels, Consonants and spaces in a string

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   char line[150];
    int vow,cons,space;
    vow=cons=space=0;
    fgets(line,sizeof(line),stdin);

    for (int i=0;line[i]!='\0';++i) 
    {
        if (line[i]=='a'||line[i]=='e'||line[i]=='i'||
            line[i]=='o'||line[i]=='u'||line[i]=='A'||
            line[i]=='E'||line[i]=='I'||line[i]=='O'||
            line[i]=='U') 
        {
            ++vow;
        } 
        else if((line[i]>='a'&&line[i]<='z')||(line[i]>='A'&&line[i]<='Z'))
        {
            ++cons;
        }
        else if(line[i]==' ') 
        {
            ++space;
        }
    }
    printf("%d",vow);
    printf("\n%d",cons);
    printf("\n%d", space);
   
    return 0;
}
