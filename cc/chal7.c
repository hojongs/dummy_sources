//2^k >= n 최대 k
//흠흠.. 적당적당

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int k;
	int n;

	k=0;
	scanf("%d", &n);
	if(n==0)
		exit(1);
	while(1)
	{
		if(pow(2.0, (double)k)>n)
			break;
		else
			k++;
	}
	printf("%d\n", k-1);
}
