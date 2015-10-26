#include <stdio.h>

int main()
{
	char buf[256];
	read(0, buf, 6);
	printf("one : %s", buf);
	read(0, buf, 6);
	printf("two : %s", buf);
}

