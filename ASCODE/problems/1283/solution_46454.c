#include <stdio.h>
int main(void)
{
	int casenum = 0;
	int phoneprice = 0; //휴대폰 가격
	int workday = 0; //일하는 일 수
	int daycount = 0; //알바하는 일 수 체크

	scanf("%d", &casenum); //케이스 개수

	for (int i = 0; i < casenum; i++) //케이스 개수까지 반복
	{
		scanf("%d", &phoneprice); //폰 가격 입력
		while (1)
		{
			if (daycount == 7)
			{
				daycount = 0;
			}

			if (0 <= daycount && daycount <= 4) {

				phoneprice = phoneprice - 27000;
				daycount = daycount + 1;
				workday++;
			}

			else if (daycount == 5)
			{
				phoneprice = phoneprice - 54000;
				daycount = daycount + 1;
				workday++;
			}

			else if (daycount == 6)
			{
				phoneprice = phoneprice - 72000;
				daycount = daycount + 1;
				workday++;
			}

			if (phoneprice <= 0)
			{
				break;
			}

		}
		printf("%d\n", workday);
		daycount = 0;
		workday = 0;
	}
	return 0;
}
/**************************************************************
	Problem: 1283
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

