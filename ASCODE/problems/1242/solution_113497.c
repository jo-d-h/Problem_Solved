#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int prize = 0;

	if (a == b && b == c)
	{
		prize = 20000 + (a * 2000);
	}

	else if (a == b || b == c || c == a)
	{
		if (a == b)
			prize = a * 2000 + 5000;
		else if (b == c)
			prize = b * 2000 + 5000;
		else
			prize = c * 2000 + 5000;
	}

	else
	{
		int middle;

		if ((a > b && a < c) || (a > c && a < b))
			prize = 500 * a;
		else if ((a > b && c < b) || (a < b && b < c))
			prize = 500 * b;
		else
			prize = 500 * c;
	}

	printf("%d\n", prize);

	return 0;
}
/**************************************************************
	Problem: 1242
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

