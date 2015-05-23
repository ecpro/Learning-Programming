#include"myFunctions.h"
#include<stdio.h>
void insertionSort(int [],int);
void printArray(int [],int);

int main()
{
	int n;
	printf("enter n: ");
	scanf("%d",&n);

	int a[n];

	printf("enter array elements");
	for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}

	insertionSort(a,n);

	printArray(a,n);

	return 0;
}


void insertionSort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		for(int j=i;j>0;j--)
		{
			if(a[j]<a[j-1]) swap(&a[j],&a[j-1]);
		}
	}
}

