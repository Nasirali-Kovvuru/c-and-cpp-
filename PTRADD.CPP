/* Addtion */
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 int *p1,*p2,*p3,p4; //p4 is normal variable
 clrscr();
 p1=&a;p2=&b;p3=&c;
 *p1=10;*p2=20;
 *p3=*p1+*p2;
 printf("c value=%d\nc Value=%d",c,*p3);
 getch();
}


