#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		char su[9];
		scanf("%s", su);

		int change_su = 0;

		for (int i = 0; i < 8; i++)
		{
			if (su[i] == '1')
				change_su = change_su * 2 + 1;

			else
				change_su *= 2;
		}

		printf("%c\n", (char)change_su);
	}
}


/**************************************************************
	Problem: 1034
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

