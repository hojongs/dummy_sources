#include <stdio.h>

int func(int fn)
{
	if(fn==0)
		return 1;
	else
		return 2*func(fn-1);
}

int main()
{
	int n;

	scanf("%d", &n);
	printf("%d\n", func(n));
	return 0;
}
