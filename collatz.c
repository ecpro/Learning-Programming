#include<stdio.h>

int collatz(int);
int main(int argc, char const *argv[])
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int iterations=collatz(n);
	printf("the no of iterations are:%d",iterations);

	return 0;
}


/*int collatz(int n)
{
  int count=0;
	while(n!=1)
    {
      if(n%2==0)
      {
        n=n/2;
        count++;
      }
      else
      {
        n=3*n+1;
        count++;
      }
    }
  return count;
} */


int collatz(int n)
{
  int count=0;
  if(n==1)
  {
    return 0;
  }
  if(n%2==0)
  {
    n=n/2;
  }
  else
  {
    n=3*n+1;
  }
  count++;
  count=count+ collatz(n);

  return count;
}
