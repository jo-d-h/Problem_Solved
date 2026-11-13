#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int t = 0;

	scanf("%d", &t);
	int N[10][4];

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d %d %d", &N[i][0], &N[i][1], &N[i][2], &N[i][3]);
	}

	for (int i = 0; i < t; i++)
	{
		if (N[i][0] + N[i][1] > N[i][2] + N[i][3])
		{
			printf("Kim DS wins\n");
		}
		if (N[i][0] + N[i][1] < N[i][2] + N[i][3])
		{
			printf("Yoo HJ wins\n");
		}
		if (N[i][0] + N[i][1] == N[i][2] + N[i][3])
		{
			printf("Draw\n");
		}
	}

	return 0;
}
/**************************************************************
	Problem: 1286
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

