#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int ip[4];

		scanf("%d.%d.%d.%d", &ip[0], &ip[1], &ip[2], &ip[3]);

		for (int i = 0; i < 4; i++)
		{
			for (int j = 7; j >= 0; j--)
			{
				printf("%d", (ip[i] >> j) & 1);
			}
			
		}
		printf("\n");
	}



	return 0;
}

/**************************************************************
	Problem: 1253
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

