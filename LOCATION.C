//W.A.P. To find out the location of
//the given number
//in 2 dimensional array
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
void main()
{
  int a[10][10],m,n,i,j,num;
  clrscr();
  printf("How many rows and columns  :   ");
  scanf("%d%d",&m,&n);
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
    printf("\nEnter %d,%d number  ",i,j);
    scanf("%d",&a[i][j]);
  }
  printf("\n Enter a number to find its location   :  ");
  scanf("%d",&num);
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
     if(num==a[i][j])
     {
 printf("\nThe number found at location %d,%d",i,j);
       getch();
       exit(0);
     }
  }
  printf("\n The number not found");
  getch();
}