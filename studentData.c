#include<stdio.h>

struct studentType{
    char name[100];
    int mathScore;
    int phyScore;
    int chemScore;
    };

void printStudent(struct studentType [],int);
void sortStudent(struct studentType [],int);
void swap(struct studentType *,struct studentType *);

int main()
{
    int n;
    printf("\n Enter no of students:");
    scanf("%d",&n);
    struct studentType s[n];

    printf("\n Enter the student details:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d %d",s[i].name,&(s[i].phyScore),&(s[i].chemScore),&(s[i].mathScore));
    }

   // printStudent(s,n);
    sortStudent(s,n);
    printStudent(s,n);

}

void printStudent(struct studentType s[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n%s %d %d %d\n",s[i].name,s[i].phyScore,s[i].chemScore,s[i].mathScore);
    }
}


void sortStudent(struct studentType s[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].phyScore>s[j].phyScore)
            {
                swap(&s[i],&s[j]);
            }
            else if(s[i].phyScore==s[j].phyScore)
            {
                if(s[i].chemScore>s[j].chemScore)
                {
                    swap(&s[i],&s[j]);
                }
                else if(s[i].chemScore==s[j].chemScore)
                {
                    if(s[i].mathScore>s[j].mathScore)
                    {
                        swap(&s[i],&s[j]);
                    }

                }
            }
        }
    }
}

void swap(struct studentType *a,struct studentType *b)
{
    struct studentType s;
    s=*a;
    *a=*b;
    *b=s;
}



