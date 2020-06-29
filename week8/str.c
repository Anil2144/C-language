#include<stdio.h>
#include<string.h>
void insert(char[],char[],int);
int main()
{
char mn[100],ist[100];
int n;
printf("enter the elements of main string\t");
gets(mn);
printf("enter the elements of insert string\t");
gets(ist);
printf("position to insert the string\t");
scanf("%d",&n);
insert(mn,ist,n);
}
void insert(char mn[],char ist[],int n)
{
char ja[100];
int i,s,o,m,l,x,t=0;
m=strlen(mn);
l=strlen(ist);
//i=0;
//while(i<=m)
//{
//ja[i]=mn[i];
//i++;
//}
s=m+l;
o=n+l;
for(i=n;i<s;i++)
{
   x=mn[i];
if(t<l)
{
  mn[i]=ist[t];
  t++;
}
mn[o]=x;
o=o+1;
}
puts(mn);
}


