#include<stdio.h>

int gcd_calc(int, int);
void swap(int *,int *);

int main()
{
    int n,value,lcm;
    printf("\nenter n:");
    scanf("%d",&n);
    printf("\n enter the values");
    scanf("%d",&value);
    int temp=value;
    for(int i=0;i<n-1;i++)
    {
      scanf("%d",&value);
      lcm=temp*value/(gcd_calc(temp,value));
      temp=lcm;
    }

    printf("\n lcm= %d",temp);
    
    return 0;
}

int gcd_calc(int x, int y)
{   
    int rem;
    if(x<y)
      swap(&x,&y);

    while(1)
    {
      if((rem=x%y)==0)
      
        return y;
    else
        {
          x=y;
          y=rem;
        }
    }
}


void swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
