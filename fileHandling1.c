#include<stdio.h>


void copyfile(FILE *,FILE *);
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("sourcefile","r");
	fp2=fopen("destination1","w+");

	if(fp1==NULL)
	{
		fprintf(stderr, "\n no such FILE as %s","sourcefile");
		return 0;
	}
	copyfile(fp1,fp2);
	fclose(fp1);
	fclose(fp2);
	// if(fp2==NULL)
	// 	{
	// 		fprintf(stderr, "\nno such FILE as %s\n","destination");
	// 		return 0;
	// 	}

	// copyfile(fp2,stdout);
	// fclose(fp2);


	return 0;
}

void  copyfile(FILE *from,FILE *to)
{
	char c;

	while(!feof(from))
	{
		fscanf(from,"%c",&c);
		fprintf(to, "%c",c);
	}
}
