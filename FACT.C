/*program to demostrate functions*/
#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5};
	int i;
	void test(int[5]);
	clrscr();
	printf("In Main\n");
	for(i=0;i<5;i++)
		printf("%d\n",a[i]);
	test(a);
	printf("Inside main function after calling test\n");
	for(i=0;i<5;i++)
		printf("%d\n",a[i]);

	getch();
}

void test(int b[5])
{
	int i;
	printf("Inside test function\n");
	for(i=0;i<5;i++)
		printf("%d\n",b[i]);
	for(i=0;i<5;i++)
		b[i]=b[i]+10;
	printf("Inside test function after modifying b\n");
	for(i=0;i<5;i++)
		printf("%d\n",b[i]);
}

