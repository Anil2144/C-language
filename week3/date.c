#include<stdio.h>
void main()
{
int a,b,c,d,e,f;
printf("enter the date:");
scanf("%d%d%d",&a,&b,&c);
if(a<30&&b==4||b==6||b==9||b==11)
{
d=a+1;
printf("%d:%d:%d",d,b,c);
}
else if(a==30&&b==4||b==6||b==9||b==11)
{
d=1;
e=b+1;
printf("%d:%d:%d",d,e,c);
}
else if(a==28&&b==2)
{
if(c%4!=0)
{
a=1;
e=b+1;
printf("%d:%d:%d",a,e,c);
}
else if(c%4==0)
{
d=a+1;
printf("%d:%d:%d",d,b,c);
}
}
else if(a==31 &&  b==12)
{
a=1;
b=1;
f=c+1;
printf("%d:%d:%d",a,b,f);
}
else if(a==31&&b==1||b==3||b==5||b==7||b==8||b==10)
{
d=1;
e=b+1;
printf("%d:%d:%d",d,e,c);
}
else if(a<31&&a!=31&&b==1||b==3||b==5||b==7||b==8||b==10||b==12)
{
d=a+1;
printf("%d:%d:%d",d,b,c);
}

else if(a<28&&b==2)
{
d=a+1;
printf("%d:%d:%d",d,b,c);
}
else if(a=29&&b==2)
printf("1:3:%d",c);
}
//fault is if we dont give leap year and we give 29th date then it accept.
