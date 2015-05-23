// #include<stdio.h>
// #include<string.h>


// int max(int ,int);
// void swap(char * ,char *);
// void reverse(char []);
// int compare(char [],char[]);
// int minIns(char [],char[]);
// int main()
// {
//   char source[1000];
//   printf("enter string:");
//   scanf("%s",source);
//   char dest[1000];
//   strcpy(dest,source);
//   reverse(dest);
//   printf("\n%s",source);
//   printf("\n%s",dest);

//   int maxMatch=strlen(source)-minIns(source,dest);

//   printf("the no of sring :%d",maxMatch);




//   return 0;
// }

// int max(int a,int b)
// {
// 	return (a>b?a:b);
// }

// void reverse(char dest[])
// {
// 	int len=strlen(dest);

// 	int start=0;
// 	int end=len-1;
// 	while(start<end)
// 	{
// 		swap(&dest[start],&dest[end]);
// 		start++;
// 		end--;
// 	}
	

// }

// void swap(char *a,char *b)
// {
// 	char temp;
// 	temp=*a;
// 	*a=*b;
// 	*b=temp;
// }

// int  minIns(char source[],char dest[])
// {
// 	if(strlen(source)==0)
// 	{
// 		return 0;
// 	}
// 	if(strlen(source)==1)
// 	{
// 		return 1;
// 	}

// 	int maxMatch=0;
// 	maxMatch=max(compare(source,dest),max(minIns(source+1,dest),minIns(dest+1,source)));
// 	return maxMatch;	
// }

// int compare(char a[],char b[])
// {
// 	int count=0;
// 	int lenA=strlen(a);
// 	int lenB=strlen(b);
// 	for(int i=0,j=0;i<lenA && j<lenB ;i++,j++)
// 	{
// 		while(a[i]==b[j])
// 		{
// 			count=count+1;
// 		}
// 	}
// 	return count;
// }


// A Naive recursive program to find minimum number insertions
// needed to make a string palindrome
#include <stdio.h>
#include <limits.h>
#include <string.h>

 
// A utility function to find minimum of two numbers
int min(int a, int b)
{  return a < b ? a : b; }
 
// Recursive function to find minimum number of insersions
int findMinInsertions(char str[], int l, int h)
{
    // Base Cases
    if (l > h) return INT_MAX;
    if (l == h) return 0;
    if (l == h - 1) return (str[l] == str[h])? 0 : 1;
 
    // Check if the first and last characters are same. On the basis of the
    // comparison result, decide which subrpoblem(s) to call
    return (str[l] == str[h])? findMinInsertions(str, l + 1, h - 1):
                               (min(findMinInsertions(str, l, h - 1),
                                   findMinInsertions(str, l + 1, h)) + 1);
}
 
// Driver program to test above functions
int main()
{
    char str[] = "WbhRkhSxo";
    printf("%d", findMinInsertions(str, 0, strlen(str)-1));
    return 0;
}
