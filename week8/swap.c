#include<stdio.h>
int swap(int,int );
int main()
{
int a,b;
printf("enter the values of 'a' and 'b'");
scanf("%d%d",&a,&b);
swap(a,b);
}
int swap(int a,int b)
{
a=a+b;
b=a-b;
a=a-b;
printf("a=%d,b=%d",a,b);
}

