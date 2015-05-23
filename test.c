#include<stdio.h>

int main()
{
    int x=5;
    int y=6;

    int *ptr;
    ptr=&x;

    printf("%d",*ptr);

    return 0;
}
