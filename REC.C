/*program to demostrate recursion*/
#include<stdio.h>
main()
{
	int n;
	long res;
	long fact(int);
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	res=fact(n);
	printf("Result = %ld",res);
	getch();
}

long fact(int n)
{
	if(n==0)
		return 1;
	else
	{
		return n*fact(n-1);
	}
}
