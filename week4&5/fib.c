#include<stdio.h>
int main()
{
int fib1,fib2,limit,count=0,c;
long long unsigned fib3;
fib1=0;
fib2=1;
printf("enter the limit");
scanf("%d",&limit);
printf("%d  %d\t",fib1,fib2);
//for(c=0;c<=100; )
//{
fib3=fib1+fib2;
	while(fib3<=limit)
	{ 
		printf("%llu\t",fib3);
		c++;
		fib1=fib2;
		fib2=fib3;
		fib3=fib1+fib2;
	}
}
