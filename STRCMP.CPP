/* Demo on string functions*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str1[50]="Raghu",str2[50];
 int i,n,c;
 clrscr();
 printf("Enter any string");
 gets(str2);


 for(i=0,c=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
     if(str1[i]!=str2[i])
     {
      printf("Both are not equal");
      c++;
      break;
     }
    }
    if(c==0)
     printf("Both are equal");
 getch();
}