#include<stdio.h>
#include<math.h>
int main()
{
float x,b,a,add,sum,sums,c,prod,i,n;
printf("enter x value and n valu");
scanf("%f%f",&x,&n);
sums=0;
for(b=2;b<=n;b=b+4)
{
	prod=1;
	for(i=b;i>=1;i--)
	{
	prod=prod*i;
	}
	//add=(-1*(pow(x,b)/prod)); 
	sums=sums+(-1*(pow(x,b)/prod));
}
sum=0;
for(b=4;b<=n;b=b+4)
{
	prod=1;
	for(i=b;i>=1;i--)
	{
	prod=prod*i;
	}
	//add=(pow(x,b)/prod);
	sum=sum+(pow(x,b)/prod);
}e
a=1+sum+sums;
printf("%f",a);
}
