#include<stdio.h>
#include<conio.h>
int
void main()
{
 int n=5,m,r=2,nf=1,nrf=1,rf=1,fun;
 int i;
 clrscr();
 for(m=n;m>=1;m--)
 nf=nf*m;
 for(m=n-r;m>=1;m--)
 nrf=nrf*m;
 for(m=r;m>=1;m--)
 rf=rf*m;

 fun=(nf/(nrf*rf)) + (nf/nrf);
 printf("fun=%d",fun);

 getch();
}