#include<stdio.h>

int main()
{
	int n,m;
	printf("enter the value of row and column");
	scanf("%d %d",&n,&m);

	int a[n][m];

	printf("enter elements");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	int count=m*n;
	int top=0,left=0;
	while(count>0)
	{
		for(int i=0;i<m;i++)
		{
			if(count<=0) return 0;
			printf("%d\t",a[top][left]);
			left++;
			count--;
		}
		left--;
		n=n-1;
		top++;
		for(int i=0;i<n;i++)
		{
			if(count<=0) return 0;
			printf("%d\t",a[top][left]);
			top++;
			count--;
		}
		top--;
		m=m-1;
		left--;
		for(int i=0;i<m;i++)
		{
			if(count<=0) return 0;
			printf("%d\t",a[top][left]);
			left--;
			count--;
		}
		left++;
		top--;
		n=n-1;
		for(int i=0;i<n;i++)
		{
			if(count<=0) return 0;
			printf("%d\t",a[top][left]);
			top--;
			count--;
		}
		top++;
		m=m-1;
		left=left+1;

	}	



}


	