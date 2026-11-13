#pragma warning(disable:4996)
#include <stdio.h>
int main(void)
{
	int t, N1[999], N2[999], tmp1 = 0, tmp2 = 0, tmp3 = 0, result[999];

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &N1[i], &N2[i]);
	}

	for (int i = 0; i < t; i++)
	{
		tmp1 = (N1[i] / 100) + (N1[i] % 100 / 10) + (N1[i] % 10);
		tmp2 = (N2[i] / 100) + (N2[i] % 100 / 10) + (N2[i] % 10);
		tmp3 = tmp1 + tmp2;
		result[i] = (tmp3 / 10) + (tmp3 % 10);
	}

	for (int i = 0; i < t; i++)
	{
		printf("%d\n", result[i]);
	}
	return 0;
}
/**************************************************************
	Problem: 1291
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

