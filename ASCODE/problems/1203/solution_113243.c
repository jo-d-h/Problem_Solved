#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int h;
		scanf("%d", &h);

		for (int i = 1; i <= h; i++) //높이
		{
			//앞 공백
			for (int j = 0; j < h - i; j++)
			{
				printf(" ");
			}
			//중간 숫자
			for (int j = 0; j < (2 * i - 1); j++)
			{
				printf("%d", i);
			}

			printf("\n");
		}

	}

	return 0;
}
/**************************************************************
	Problem: 1203
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

