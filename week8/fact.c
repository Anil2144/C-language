#include<stdio.h>
int fact(int );
int main()
{
int n,f;
printf("enter the number");
scanf("%d",&n);
f=fact(n);
printf("factorial of given number is %d",f);
}
int fact(int n)
{
int i,fact;
fact=1;
for(i=n;i>0;i--)
{
fact=fact*i;
}
return (fact);
}
