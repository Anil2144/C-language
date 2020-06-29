#include<stdio.h>
#include<math.h>
void main()
{
float x,n,i,fact,ans,a,b;
printf("enter x and n value");
scanf("%f%f",&x,&n);
ans=0;
for(b=1;b<=n;b=b+1)
{
	fact=1;
	for(i=1;i<=b;i++)
	{
	fact*=i;
	}
ans+=(pow(x,b)/fact);
}
a=ans+1;
printf("%f",a);
}
