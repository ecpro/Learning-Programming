#include<stdio.h>
#include<string.h>

int main()
{
	char string[64];
	printf("enter any string");
	scanf("%s",string);

	int i=64-strlen(string);

	if(i%2==0)
	{
		printf("\n");
		for(int y=1;y<=i/2;y++)
			printf("_");
		printf("%s",string);
		for(int y=i/2+strlen(string)+1;y<=64;y++)
		{
			printf("_");
		}
		printf("\n");
	}
	if(i%2!=0)
	{
		printf("\n");
		for(int y=1;y<=i/2+1;y++)
		{
			printf("_");
		}
		printf("%s",string);
		for(int y=strlen(string)+i/2+2;y<=64;y++)
		{
			printf("_");
		}
		printf("\n");
	}

	return 0;

}