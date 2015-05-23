#include<stdio.h>
#include<string.h>

int main()
{
    char *ones[]={"","one","two","three","four","five","six","seven","eight","nine"};

    char *twos[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

    char *tens[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

    char *higherDigits[]={"","","","hundred","thousand"};

    char *num="0000";

    int len=strlen(num);

    printf("\n %d \n",len);

    if(len==1)
    {
        printf("%s",ones[*num-'0']);
        return;
    }
    else
    {
        while(*num!='\0')
        {
            if(len==2 && *num=='1')
            {
                printf(" %s ",twos[(*(num+1)-'0')]);
                return 0;
            }
            else if(len==2 && *num!='1')
            {
                printf(" %s %s",tens[*num-'0'],ones[*(num+1)-'0']);
                return 0;
            }
            else if(len==2 && *num=='0')
            {
                printf("%s",ones[*(num+1)-'0']);
                return 0;
            }
            else
            {
                if(*num=='0')
                {
                    num++;
                    len--;
                    continue;
                }
                printf("%s %s ",ones[*num-'0'],higherDigits[len]);
                num++;
                len--;
            }




        }
    }

    return 0;

}
