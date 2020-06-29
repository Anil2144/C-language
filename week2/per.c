#include<stdio.h>
int main ()
{
float a,b,c;
printf("enter any 2 numbers :");
scanf("%f%f",&a,&b);
c=a*100/b;
printf("%0.1f is %0.1f percentage of %0.1f",a,c,b);
}
