#include<stdio.h>
int main()
{ 
int a,b,c;
printf("enter any three numbers :");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("%d is maximum",a);
else if(b>a&&b>c)
printf("%d is maximun",b);
else
printf("%d is maximum",c);
}
