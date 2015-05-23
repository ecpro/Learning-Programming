#include<stdio.h>
#include<string.h>
int main()
{
    char* a[20], b[20];
    printf("\n enter any string");
    scanf("%s",a);

    int str1=strlen(a);

    printf("\n enter the second string");
    scanf("%s",b);
    int str2=strlen(a);
    int j,k,count1=0,count=0;
    for(int i=0;i<=(str1-str2-1);i++)
    {
        j=0;k=i;
        while(a[j++]==b[k++])
          count++;
        if(count==str1)
          count1++;

    }
}
