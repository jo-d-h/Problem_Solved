#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int amount;
		scanf("%d", &amount);

		if (amount % 100 != 0 || amount == 0)
			printf("Sorry\n");

		else
		{
			int remain = amount;

			int ten_t = remain / 10000;
			remain %= 10000;

			int five_t = remain / 5000;
			remain %= 5000;

			int one_t = remain / 1000;
			remain %= 1000;

			int five_h = remain / 500;
			remain %= 500;

			int one_h = remain / 100;

			printf("BILL : %d %d %d, COIN : %d %d\n", ten_t, five_t, one_t, five_h, one_h);
		}
	}

	return 0;
}
/**************************************************************
	Problem: 1246
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

