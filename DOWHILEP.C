/*program to find factorial using do while*/
#include<stdio.h>
main()
{
	int base,exp,i=1;
	long res=1;
	clrscr();
	printf("Enter base and exp:");
	scanf("%d%d",&base,&exp);
	if(exp != 0)
	{
		do
		{
			res=res*base;
			i=i+1;
		}while(i<=exp);
	}
	printf("Result is %ld",res);
	getch();
}