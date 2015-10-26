//10개의 소수 구하기
//은근 고생하네

#include <stdio.h>

int main()
{
	int count=0, calc, sosu=2;
	
	printf("%d ", sosu);
	sosu++;
	while(count<10) //count 10번
	{
		int calc=2;
		while(1) //sosu
		{
			//소수야
			if(sosu==calc)
			{
				printf("%d ", sosu);
				count++;
				sosu+=2;
				break;
			}
			//소수아니야
			if(sosu%calc==0)
			{
				sosu+=2;
				break;
			}
			else
				calc++;
		}
	}
	printf("\n");
}
