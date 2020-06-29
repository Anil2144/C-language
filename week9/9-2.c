#include<stdio.h>
int fibb(int);
int main()
{
int n,x;
printf("which term u want");
scanf("%d",&n);
x=fibb(n);
printf("%d",x);
}

int fibb(int n)
{
if(n==1)
return 0;
else if(n==2)
return 1;
else
return(fibb(n-1)+fibb(n-2));
}


