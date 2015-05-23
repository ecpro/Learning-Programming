#include<stdio.h>

#define maxof(x,y) ((x>y)?x:y)
#define minof(x,y) ((x<y)?x:y)


void swap(int * ,int *);

int main()
{
	int n,max,min,prev,next;

	printf("Enter n: ");
	scanf("%d",&n);

	if((n&1)==1)
	{
		scanf("%d",&max);
		scanf("%d",&min);

		if(max<min)
		{
			swap(&max,&min);
		}

		scanf("%d",&prev);

		if(max<prev)
		{
			swap(&max,&prev);
		}
		if(min>prev)
		{
			swap(&min,&prev);
		}

		for(int i=4;i<=n;i+=2)
		{
			scanf("%d",&prev);
			scanf("%d",&next);

			if(prev>next)
			{
				max= maxof(max,prev);
				min= minof(min,next);
			}
			else
			{
				max= maxof(max,next);
				min= minof(min,prev);
			}

		}
	}

	else
	{
		scanf("%d",&max);
		scanf("%d",&min);

		if(max<min)
		{
			swap(&max,&min);
		}

		for(int i=3;i<=n;i+=2)
		{
			scanf("%d",&prev);
			scanf("%d",&next);

			if(prev>next)
			{
				max=maxof(max,prev);
				min=minof(min,next);
			}
			else
			{
				max=maxof(max,next);
				min=minof(min,prev);
			}
		}
	}

	printf("\n max: %d  and min : %d ",max,min);

	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

