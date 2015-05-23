#include<stdio.h>
#include<stdlib.h>

struct student{
char name[20];
int phy,che,math;
};
typedef struct student student;

void print(student *s,int n){
int i;
for(i=0;i<n;i++){
	printf("%s\t",s[i].name);
	printf("%d\t",s[i].phy);
	printf("%d\t",s[i].che);
	printf("%d\n",s[i].math);
}
}

int comparator(const void *p, const void *q)
{
	float l = ((student *)p)->phy;
	float r = ((student *)q)->phy;
	if((l-r)!=0)	return (l-r);
	else{
		l = ((student *)p)->che;
		r = ((student *)q)->che;
		if((l-r)!=0)	return(l-r);
		else{
			l = ((student *)p)->math;
			r = ((student *)q)->math;
			return (l-r);
	}	}
}

int main(){
int i,n;
scanf("%d",&n);
student *student_info= (student *)malloc(sizeof(student)*n);
for(i=0;i<n;i++){
	scanf("%s",student_info[i].name);
	scanf("%d",&student_info[i].phy);
	scanf("%d",&student_info[i].che);
	scanf("%d",&student_info[i].math);
}
qsort((void *)student_info,n,sizeof(student),comparator);
print(student_info,n);
return 0;
}
