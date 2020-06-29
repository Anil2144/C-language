#include<stdio.h>
int main()
{
int a,c;
int count=0;
c=0;
for(a=1;count<=99;a=a+2)
{
c=c+a;
count++;
}
//printf("sum of even numbers=%d\n",b);
printf("sum of odd numbers=%d",c);
}
