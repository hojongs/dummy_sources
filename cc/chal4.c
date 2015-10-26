//오랜만에 짜니까.. 이거 짜는 것도 힘들다..
//퇴근길에 크림빵 새우깡 콜라 사기

#include <stdio.h>

int main()
{
	int money=3500;
	int cream=500;
	int saewoo=700;
	int coke=400;
	int i,j;
	money=3500-cream-saewoo-coke; //1900

	for(i=0;(money-cream*i)>=0;i++)
	{
		for(j=0;(money-cream*i)-saewoo*j>=0;j++)
		{
			if(((money-cream*i)-saewoo*j)%coke==0)
				printf("%d %d %d\n", i+1, j+1, ((money-cream*i)-saewoo*j)/coke+1);
		}
	}
}
