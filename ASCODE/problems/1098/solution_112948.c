#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int n;
		scanf("%d", &n);

		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz\n");
		else if (n % 3 == 0)
			printf("Fizz\n");
		else if (n % 5 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", n);
	}
}
/**************************************************************
	Problem: 1098
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

