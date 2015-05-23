#include<stdio.h>

 int main(int argc, char const *argv[])
{
	char string[300];
	printf("enter any string");
	fgets(string,300,stdin);
	int start,end;
	printf("\n enter start index:");
	scanf("%d",&start);
	printf("enter end index:");
	scanf("%d",&end);
	if(start<0 ||end>300)
	{
		printf("index out of range");
		return 0;
	}
	for(int i=start;i<end-1;i++)
	{
		printf("%c",string[i]);
	}
	return 0;
}