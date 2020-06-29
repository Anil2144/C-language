#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter any number");
scanf("%d",&a);
b=a%10;
printf("%d ones \n",b);
c=a/10;
d=c%10;
printf("%d tens \n",d);
e=c/10;
printf("%d hundreds \n",e);
}
