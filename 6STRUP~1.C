// write a program to convert lower case
//string to upper case string.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[20];
clrscr();
printf("Enter any lower case string 1-112/b");
gets(name);
strupr(name);
printf("lower to UPPER is %s",name);
getch();
}