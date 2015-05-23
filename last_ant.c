#include<stdio.h>

int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	printf("enter the ant directions(-1) or(1):");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	int left=0,right=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			right++;
		}
		else
		{
			left++;
		}
	}

 printf("\n%d\n",right);
 printf("%d\n\n\n",left);
	if(right>left)
	{
		printf("%d",left+1);
	}
	else if(left>=right)
	{
		printf("%d",left);
	}
	
	return 0;
}
