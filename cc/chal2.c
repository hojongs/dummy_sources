//99

#include <stdio.h>

int main()
{
	int i,j,k,l;

	scanf("%d%d", &k, &l);
	__fpurge(stdin);
	if(k>l)
	{
		i=k;
		k=l;
		l=i;
	}
	
	for(i=k;i<=l;i++)
	{
		for(j=1;j<=9;j++)
		{
			printf("%d * %d = %d\n", i, j, i*j);
		}
		getchar();
	}
}	
