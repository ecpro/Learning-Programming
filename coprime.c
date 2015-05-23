#include<stdio.h>

int coprime(int,int);

int main()
{
  int n;
  int count=0;
  printf("\n enter:");
  scanf("%d",&n);

  for(int i=n-1;i>1;i--)
  {
    count +=coprime(i,n);
  }
  printf("%d",count);
  return 0;
}

int coprime(int i,int n)
{
  int rem;
  while(1)
  {
    rem=n%i;
    if(rem==1)
      return 1;
    else if(rem==0)
      return 0;
    else
    {
      n=i;
      i=rem;
    }
  }
}
