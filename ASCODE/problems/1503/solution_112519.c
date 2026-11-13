#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int n, k;
		scanf("%d %d", &n, &k);

		int av_time = 240 - k; //문제 가용 시간 : 4시간 - 이동시간
		int sp_time = 0; //쓴 시간
		int solved = 0; //푼 문제

		for (int i = 1; i <= n; i++)
		{
			sp_time += 5 * i; //쓴 시간

			if (sp_time > av_time)
				break;

			solved++;
		}

		printf("%d\n", solved);
	}
	return 0;
}
/**************************************************************
	Problem: 1503
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

