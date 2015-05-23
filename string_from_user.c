#include<stdio.h>

int main()
{
  char string[345];
  fgets(string,345,stdin);

  printf("%s",string);

  return 0;
 }
