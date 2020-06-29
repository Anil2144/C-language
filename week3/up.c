#include<stdio.h>

int main()

{

int a,b;

printf("enter any two integers :");

//r/scanf("%d%d",&a,&b);

if(scanf("%d%d",&a,&b)!=2)

printf("Error");

else if(a<b)

printf("%d is up",a);

else if(b<a)

printf("%d is down",b);

else if(a==b)
printf("equal");

//else
//printf("error");
}
