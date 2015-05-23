#include<stdio.h>
#include<string.h>

void copy_array(int *,int*,int,int);

void main()
{
    int str1[]={1,3,5,2,5,2,5,8};
    int str2[]={-1,-1,-1,-1,-1};

    int len1=sizeof(str1)/sizeof(int);
    int len2=sizeof(str2)/sizeof(int);

    copy_array(str1+3,str2+4,len1,len2);

    printf("the length of str1 is  %d  ",len1);

    int i;
    for(i=0;i<len1;i++)
    {

        printf("%d",str1[i]);
    }

}

void copy_array(int *str1,int *str2,int len1,int len2)
{

    int i,j;
    for(i=0,j=0;i<len1 && j<len2;i++,j++)
    {
        *(str1+i)=*(str2+j);
    }
}
