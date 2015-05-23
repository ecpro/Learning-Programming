#include<stdio.h>


int main()
{
    char *cal[]={"January","February","March","April","May","June","July","August","September","October","November","December"};

    int n;
    printf("\n enter the month in numbers: ");
    scanf("%d",&n);

    // printf("%c",*(*(cal+1)+2));

    if(n>=1 && n<=12)
    {
        //printf(" %s ",*(cal+(n-1)));

        printf(" %s ",cal[n-1]);

        // printf("%c",cal[n-1][3]);
    }

    return 0;

}
