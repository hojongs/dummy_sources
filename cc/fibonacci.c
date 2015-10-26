#include <stdio.h>

int co0, co1;

void fibonacci(int n) {
    if (n==0) {
        co0++;
    } else if (n==1) {
        co1++;
    } else {
        fibonacci(n-1);
	fibonacci(n-2);
    }
}

int main()
{
	int t, n, i;

	scanf("%d", &t);

	for(i=0;i<t;i++)
	{
		scanf("%d", &n);
		co0=0;co1=0;
		fibonacci(n);
		printf("%d %d\n", co0, co1);
	}
}
