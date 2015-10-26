//초 입력 시간 출력
//해봤던 거라 그런지 한방에 함

#include <stdio.h>

#define HR  60
#define MIN 60

int main()
{
	//declaration
	int ch;
	int hour, min;

	//input
	scanf("%d", &ch);

	//calc
	min=ch/MIN;
	ch=ch%MIN;
	hour=min/HR;
	min=min%HR;
	

	//output
	printf("%d %d %d\n", hour, min, ch);

	return 0;
}
