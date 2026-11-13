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
		int hour_wage;
		int hour;

		while (n > money)
		{
			if (day % 7 >= 0 && day % 7 <= 4)
			{
				hour_wage = 10000;
				hour = 4;
			}

			if (day % 7 == 5 || day % 7 == 6)
			{
				hour_wage = 15000;
				hour = 6;
			}

			money += hour_wage * hour;
			day++;
		}

		printf("%d\n", day);
	}

	return 0;
}
/**************************************************************
	Problem: 1374
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

