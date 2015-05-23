#include<stdio.h>
#include<cs50.h>

 int main() 
{ 
	int number, total; 
	int finalDigit;
	int n;
	printf("Enter the number: "); 
	number=GetInt();
	n=number;
	total=0;
	while( (n%10)>=0)
	 { 
		finalDigit = n%10;
		total = total + (finalDigit*finalDigit*finalDigit); 
		 n = n/10;
	 } 
	printf("The total is %d\n",total); 
	if(total==number)
		 printf("%d is a Armstrong number \n",number); 
	else
		 printf("%d is not a Armstrong number \n",number); 
return 0;
 }
