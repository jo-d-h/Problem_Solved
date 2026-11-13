#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int n;
		scanf("%d", &n);

		int original = n;
		int reverse = 0;

		while (n > 0)
		{
			reverse = reverse * 10 + n % 10;
			n /= 10;
		}

		if (original == reverse)
		{
			printf("Same!\n");
		}
		else if (original > reverse)
		{
			printf("%d\n", original - reverse);
		}
		else
			printf("%d\n", reverse - original);
	}

	return 0;
}
/**************************************************************
	Problem: 1508
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

