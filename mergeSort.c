#include<stdio.h>
void mergesort(int a[],int start,int end);
void merge(int a[],int start,int mid,int end);
int main()
{

    int n;
    printf("\n enter n: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    mergesort(a,0,n-1);

    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;

}

void mergesort(int a[],int start,int end)
{
    int mid=(start+end)/2;

    if(start>=end)
    {
        return;
    }
    mergesort(a,start,mid);
    mergesort(a,mid+1,end);
    merge(a,start,mid,end);
}

void merge(int a[],int start,int mid,int end)
{
    int b[50];
    int start1=start;
    int start2=mid+1;
    int i=0;
    while(start1<=mid && start2<=end)
    {
        if(a[start1]<a[start2])
        {
            b[i++]=a[start1++];

        }
        else
        {
            b[i++]=a[start2++];
            
        }

    }
    if(start1>mid)
    {
        for(;start2<=end;i++)
        {
            b[i]=a[start2];
            start2++;
        }
    }
    else
        for(;start1<=mid;i++)
    {
        b[i]=a[start1];
        start1++;
    }
    int j=start;
    for(i=0;i<=end-start;i++)  // note: keep in mind the length of b[] as its not between 0 to end 
    {						  //        but between length(start-end)
         a[j++]=b[i];
    }
}
