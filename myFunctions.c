#include<stdio.h>
#include"myFunctions.h"
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void printArray(int a[],int n)
{
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

