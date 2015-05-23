#include<stdio.h>
#include<string.h>

void reverse_in_place(char [],int len);
void swap(char *,char*);

void main()
{
    char str[]="pop";

    int len=strlen(str);

    printf("%s",str);
    printf("length %d",len);

    reverse_in_place(str,len);

    printf("%s",str);

}

void reverse_in_place(char str[],int len)
{
    char *a=str;
    char *b=a+len-1;

    while(b>a)
    {

        swap(a,b);
        a++;
        b--;
    }



}
void swap(char *a,char *b)
{

    char *temp=*a;
    *a=*b;
    *b=temp;
}
