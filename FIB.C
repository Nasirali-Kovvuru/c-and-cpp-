#include<stdio.h>
main()
{
	int n=5;
	void fib(int);

	clrscr();
	fib(n);
}

void fib(int n)
{
	if(n==1)
		printf("%d", 1);
	else if(n==2)
		printf("%d %d",1,2);
	else
		fib(n-1)+fib(n-2);
}