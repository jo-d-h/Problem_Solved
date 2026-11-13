#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);

		char posit[101];

		scanf("%s", posit);

		int valid = 1;

		for (int i = 0; i < strlen(posit); i++)
		{
			if (posit[i] == 'R')
				x++;
			else if (posit[i] == 'L')
				x--;	
			else if (posit[i] == 'U')
				y++;
			else if (posit[i] == 'D')
				y--;

			if (x < -40 || x > 40)
			{
				valid = 0;
				break;
			}
		}

		if (valid == 0)
			printf("NO\n");
		else
			printf("%d %d\n", x, y);
	}

	return 0;
}
/**************************************************************
	Problem: 1217
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

