#include<stdio.h>
int rev(int);
int main()
{
int n,x;
printf("enter the number");
scanf("%d",&n);
x=rev(n);
printf("%d",x);
}
int rev(int n)
{
int r;
static int sum=0;
r=n%10;
sum=sum*10+r;
n=n/10;
if(n>0)
{
rev(n);
}

else
return sum;
}
