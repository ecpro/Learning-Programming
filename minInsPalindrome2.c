#include<stdio.h>
#include<string.h>

int min(int,int);
int main()
{
	char string[100];
	printf("enter string");
	scanf("%s",string);
	int start=0;
	int last=strlen(string)-1;

	printf("length of string is %d\n",strlen(string));
	int count1=0,count2=0,finalCount;
	while(1)
	{
		if(start==last)
		{
			break;
		}
		if(start==last-1)
		{
			if(string[start]==string[last])
			{
				break;
			}
			else
			{
				count1=count1+1;
				start++;
			}
		}
		else
		{
			if(string[start]==string[last])
			{
				start++;
				last--;
			}
			if(string[start]!=string[last])
			{
				count1++;
				start++;
			}	
		}
		
	}

	start=0,last=strlen(string)-1;

	while(1)
	{
		if(start==last)
		{
			break;
		}
		if(start==last-1)
		{
			if(string[start]==string[last])
			{
				break;
			}
			else
			{
				count2=count2+1;
				last--;
			}
		}
		else
		{
			if(string[start]==string[last])
			{	
				start++;
				last--;
			}
			if(string[start]!=string[last])
			{
				count2++;
				last--;
			}	
		}
		
	}

	printf("\ncount1: %d",count1);
	printf("\ncount2:%d",count2);

	finalCount=min(count1,count2);

	printf("\n the no of characters required %d",finalCount);

	return 0;
}


int min(int a,int b)
{
	return ((a<b)?a:b);
}