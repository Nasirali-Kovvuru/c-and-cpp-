#include<stdio.h>
#include<conio.h>
int rev(int);
void word(int);
void conv(int);

void main()
{
 clrscr();
 int n=215;
 word(n);
 getch();
}

int rev(int n)
{
 int rv=0;
 for(;n!=0;n/=10)
 rv=rv*10+n%10;
 return rv;
}

void conv(int d)
{
 switch(d)
 {
  case 0: printf("Zero");break;
  case 1: printf("One");break;
  case 2: printf("Two");break;
  case 3: printf("Three");break;
  case 4: printf("Four");break;
  case 5: printf("Five");break;
 }
}

void word(int n)
{
 n=rev(n);
 for(;n!=0;n=n/10)
 conv(n%10);
}










