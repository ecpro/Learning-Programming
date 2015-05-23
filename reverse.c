#include<stdio.h>

int main()
{
  int x;

  printf("\nenter the value of x\n");

  scanf("%d",&x);

  while(x/10!=0)
  {
    printf("%d",x%10);
    x=x/10;

  }
  printf("%d\n",x);

  return 0;
}
