#include<stdio.h>	
int main()
{
int i,j,c,n,count;
printf("how many prime numbers u want");
scanf("%d",&n);
count=0;
for(i=2;count<=n;i++)
{
        c=0;
	for(j=2;j<i;j++)
	{
	   if(i%j==0)
	     c++;
	}
     if(c==0)
     {
       printf("%d\t\t",i);
count++;
     }
}
}
