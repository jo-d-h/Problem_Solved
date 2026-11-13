#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int n;
		scanf("%d", &n);

		int money = 0;
		int day = 0;
		int daily_wage = 5000;

		while (n > money)
		{
			money += daily_wage;
			day++;

			if (day % 10 == 0)
				daily_wage += 200;
		}

		printf("%d\n", day);
	}

	return 0;
}
/**************************************************************
	Problem: 1272
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

