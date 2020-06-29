#include<stdio.h>
int fibo( );
int main()
{
    int a,ter;
printf("enter the term........?");
scanf("%d",&ter);
a=fibo(ter);
printf("value of given fibnacii term is %d",a);
}
int fibo(int ter)
{
int fib1,fib2,fib3,i,j,c;
fib1=0;
fib2=1;
c=1;
while(c<ter)
{
fib3=fib1+fib2;
fib1=fib2;
fib2=fib3;
c++;
}
return (fib1);
}


