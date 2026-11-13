#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int n, money = 0, day = 0;
		scanf("%d", &n);

		while (money < n)
		{
			day++;

			if ((day % 7 == 1) || (day % 7 == 2) || (day % 7 == 3) || (day % 7 == 4))
				money += 36000;
			else
				money += 60000;
		}

		printf("%d\n", day);
	}
}
/**************************************************************
	Problem: 1087
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

