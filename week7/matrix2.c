#include<stdio.h>
void main()
{

int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2,k;
printf("enter the order of  matrix\n");
scanf("%d%d",&r1,&c1);
printf("Enter the elements of  matrix\n");
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
for(j=0;j<c1;j++)
{
	for(i=0;i<r1;i++)
	{
	printf("%d\t",a[i][j]);
	}
printf("\n");
}
}
