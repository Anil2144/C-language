#include<stdio.h>
void main()
{

int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2,k;
printf("enter the order of 1st matrix\n");
scanf("%d%d",&r1,&c1);
//printf("enter the order of 2nd matrix\n");
//scanf("%d%d",&r2,&c2);
printf("Enter the elements of 1st matrix\n");
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
	scanf("%d",&a[i][j]);
	//printf("%d\t",a[i][j]);
	}
}
printf("Enter the order of 2nd matrix\n");
scanf("%d%d",&r2,&c2);
printf("Enter the elements of 2nd matrix\n");
for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
	{
	scanf("%d",&b[i][j]);
	//printf("%d\t",b[i][j]);
	}
}
if(c1==r2)
{
for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
	{
	c[i][j]=0;
		for(k=0;k<c2;k++)
		{
		c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
		}
	printf("%d\t",c[i][j]);
	}
printf("\n");
}
}
else
{
printf("order is not suitable");
}
}

