#include<stdio.h>
#include<math.h>
void  main()
{
float a,b,c,x,y;
printf("enter the quadratic equation");
scanf("%f%f%f",&a,&b,&c);
int d=b*b-4*a*c;
x=(-b+sqrt(d))/2*a;
y=(-b-sqrt(d))/2*a;
 if(d<0)
 {
	printf("the roots are imaginary");
 }
 else if (d==0)
 {
	printf("roots of equation are equal\n");
	printf("%f,%f are roots of equtn\n",x,y);
 }
 else
 {
	printf("roots of equtn are real\n");
	printf("%f,%f are roots of equtn",x,y);
 }
}
