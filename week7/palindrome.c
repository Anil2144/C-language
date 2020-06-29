#include<stdio.h>
int main()
{
char text[100];
int begin,middle,end,length=0;
printf("enter the text\n");
gets(text);


while(text[length]!='\0')
{
length++; 
}
end=length-1;
middle=length/2;


	for(begin=0;begin<middle;begin++,end--)
	{
		if((text[begin])!=(text[end]))
		{
		printf("not a palindrome.\n");
		break;
		}
	}


if(begin==middle)
{
printf("palindrome.\n");
}

return 0;
}
