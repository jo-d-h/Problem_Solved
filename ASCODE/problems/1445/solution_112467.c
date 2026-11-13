#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);

		char word[20][21];
		int max_len = 0;
		int len;

		//입력
		for (int j = 0; j < n; j++)
		{
			scanf("%s", word[j]);

			len = strlen(word[j]);
			if (len > max_len)
				max_len = len;
		}

		//세로 출력
		for (int col = 0; col < max_len; col++)
		{
			for (int row = 0; row < n; row++)
			{
				if (col < strlen(word[row]))
					printf("%c", word[row][col]);
			}
		}

		printf("\n");
	}

	return 0;
}
/**************************************************************
	Problem: 1445
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

