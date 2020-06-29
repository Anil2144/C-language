#include<stdio.h>
#include<math.h>
void main()
{
float b,n,i,fact,plus,minus,x,a;
printf("enter x and n value");
scanf("%f%f",&x,&n);
plus=0;
for(b=1;b<=n;b=b+4)
{
	fact=1;
	for(i=1;i<=b;i++)
	{
	fact*=i;
	}
plus+=(pow(x,b)/fact);
}
minus=0;
for(b=3;b<=n;b=b+4)
{
	fact=1;
	for(i=1;i<=b;i++)
	{
	fact*=i;
	}
minus+=(-1*(pow(x,b)/fact));
}
a=plus+minus;
printf("%f",a);
}
