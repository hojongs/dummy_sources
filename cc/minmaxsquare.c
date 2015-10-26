#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i; //case count
	int j; //point count
	int k; //optimize

	int m, n; //input

	int **xy; //point input

	int flag;

	int xcount[100];
	int xturn[100];

	scanf("%d", &m);
	for(i=0;i<m;i++)
	{
		scanf("%d", &n);
		xy=(int**)malloc(sizeof(int**)*n);
		//input point
		for(j=0;j<n;j++)
		{
			xy[j]=(int*)malloc(sizeof(int*)*2);
			scanf("%d%d", &xy[j][0], &xy[j][1]);
			
		}
		//optimize
		for(j=n;j>0;j--)
		{
			for(k=0;k<j;k++)
			{
				
			}
		}
		//calculate
		
	}
}
