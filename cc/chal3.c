//Euclidean Algorithm - Supported by Jun-Mo
//chal3.c GCM

#include <stdio.h>

int eu_func(int m, int n)
{
	if(n==0)
		return m;
	else
	{
		return eu_func(n, m%n);
	}
}

int main()
{
	int m, n;
	int temp;

	scanf("%d%d", &m, &n);

	if(m<n)//switching
	{
		temp=m;
		m=n;
		n=temp;
	}

	printf("%d\n", eu_func(m, n));
	
}
