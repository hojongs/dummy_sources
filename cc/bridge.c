#include <stdio.h>

int main()
{
	int t;
	int n, m;
	int i, j;
	int result=0;
	scanf("%d", &t);

	for(j=0;j<t;j++)
	{
		scanf("%d%d", &n, &m);

		for(i=1;i<=n;i++)
		{
			result=result+(m-i);
		}
		printf("%d\n", result);
	}

	return 0;
}
