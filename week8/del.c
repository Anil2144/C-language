#include<stdio.h>
#include<string.h>
void delete(char[],int,int);
int main()
{
char a[100],b[100];
int d,p;
printf("enter the string\t");
gets(a);
printf("enter the position to delete:");
scanf("%d",&p);
printf("how many characters do u want to delete:\t");
scanf("%d",&d);
delete(a,d,p);
puts(a);
}
void delete(char a[],int d,int p)
{
int l,i,j;
l=strlen(a);
for(i=0;i<l;i++)
{
 if(i==p)
 {
  for(j=p;j<l;j++)
  {
  a[j]=a[j+d];
  }
 }
}
}
