#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int main()
{
	const int MAX = 3000;
	int iInput[MAX], iDiff[MAX];

	int n;

	while ((scanf("%d", &n)) != EOF)
	{
		//입력받고 입력값 저장
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &iInput[i]);
		}

		//차이 배열 초기화
		for (int i = 0; i < n; i++)
		{
			iDiff[i] = 0;
		}

		//차이 계산(마지막 - 1까지)
		for (int i = 0; i < n - 1; i++)
		{
			int diff = iInput[i] - iInput[i + 1];

			//절댓값으로
			if (diff < 0)
			{
				diff = -diff;
			}

			//차이가 1~n-1 사이에 있으면
			if (diff >= 1 && diff <= n - 1)
			{
				iDiff[diff] = 1;
			}
		}

		int is_jolly = 1;

		//하나라도 차이가 0이면 졸리 아님
		for (int i = 1; i < n; i++)
		{
			if (iDiff[i] == 0)
			{
				is_jolly = 0;
				break;
			}
		}

		if (is_jolly)
		{
			printf("Jolly\n");
		}
		else
		{
			printf("Not jolly\n");
		}

	}


	return 0;
}
/**************************************************************
	Problem: 1263
	Language: C++
	Result: Accepted
	Time:7 ms
	Memory:1120 kb
****************************************************************/

