#include<stdio.h>


int main()
{
	int n,max,min;
	printf("enter n: ");
	scanf("%d",&n);
	int a[n];	

	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	if((n&1)==1)
	{
		max=a[0];
		if(a[1]>a[2])
		{
			max=(max>a[1]?max:a[1]);
			min=(a[0]<a[2]?a[0]:a[2]);
		}
		else
		{
			max=(max>a[2]?max:a[2]);
			min=(a[0]<a[1]?a[0]:a[1]);
		}
		for(int i=4;i<n;i=i+2)
		{
			if(a[i]>a[i-1])
			{
				max=(max>a[i]?max:a[i]);
				min=(min<a[i-1]?min:a[i-1]);
			}
			else 
			{
				max=(max>a[i-1]?max:a[i-1]);
				min=(min<a[i]?min:a[i-1]);

			}
		}

	}


	else
	{
		if(a[0]>a[1]) { max=a[0]; min =a[1];}

		else { max=a[1]; min=a[0];}

		for(int i=3;i<n;i=i+2)
		{
			if(a[i]>a[i-1])
			{
				max=(max>a[i]?max:a[i]);
				min=(min<a[i-1]?min:a[i-1]);
			}
			else 
			{
				max=(max>a[i-1]?max:a[i-1]);
				min=(min<a[i]?min:a[i]);

			}
		}	
	}
	
	printf("\n max: %d min: %d \n ",max,min);


	return 0;
}
