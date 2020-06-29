#include<stdio.h>
#include<string.h>
void reverse(char[],int,int);
int main()
{
int l;
char x[10];
int i=0;
char a[10];
printf("enter the string:");
gets(a);
l=strlen(a);                                                                               
reverse(a,l,i);
}

void reverse(char a[],int l,int i)
{
int tem;
tem=a[i];
a[i]=a[l-i];
a[l-i]=tem;
if(i==l/2)
{
for(i=0;i<=l;i++)
{
printf("%c",a[i]);
}
}
else
{
reverse(a,l,i+1);
}
}
