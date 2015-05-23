#include<stdio.h>

#include"sorting.h"

void bubblesort(int a[],int);


#include<stdio.h>
void swap(int *,int*);

int main()
{
    int n;
    printf("enter the size");
    scanf("%d",&n);

    int a[n];

    printf("\n enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    bubblesort(a,n);

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}




