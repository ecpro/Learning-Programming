#include<stdio.h>

int maze[50][50];

int mazeFunc(int ,int );
int check_bounds(int,int);

int n;

int main()
{
	printf("\n enter n:");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&maze[i][j]);
		}
	}

	int x=mazeFunc(0,0);

	if (x==0)
		printf("\n NOT POSSIBLE \n ");
	if (x==1)
		printf("\n POSSIBLE \n ");

	return 0;
}

int mazeFunc(int x,int y)
{
		int isMaze1=0,isMaze2=0;
		if(maze[x][y]==1 && x==n-1 && y==n-1)
			return 1;
		if(check_bounds(x+1,y+1)==1 && maze[x+1][y]==0 && maze[x][y+1]==0)
			return 0;
		if(check_bounds(x+1,y)==1 && maze[x+1][y]==1 )
			{
				 isMaze1=mazeFunc(x+1,y);
			}
		if(check_bounds(x,y+1)==1 && maze[x][y+1]==1)
		{
			isMaze2=mazeFunc(x,y+1);
		}

		if(isMaze1==1 || isMaze2==1)
			return 1;
		else 
			return 0;
}

int check_bounds(int x,int y)
{
	if(x<n && y<n && x>-1 && y>-1)
	{
		return 1;
	}
	else
		return 0;
}