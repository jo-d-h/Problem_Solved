#pragma warning(disable:4996)
#include <stdio.h>
int main(void)
{
	int t = 0, x, o, y, i = 0;
	char arr[101];

	scanf("%d", &t);

	for (int q = 0; q < t; q++)
	{
		scanf("%d %d", &x, &y);
		x = 0; y = 0;

		scanf("%s", arr);
		o = 0;
		while (arr[o] != 0)
			o++;


		for (int p = 0; p < o; p++)
		{
			switch (arr[p])
			{
			case 'L':
				x--;
				break;

			case 'R':
				x++;
				break;

			case 'U':
				y++;
				break;

			case 'D':
				y--;
				break;

			}
		}
		printf("%d %d\n", x, y);
	}

	return 0;
}
/**************************************************************
	Problem: 1135
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

