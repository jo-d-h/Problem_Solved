#pragma warning(disable:4996)
#include <stdio.h>
int main(void)
{
	int t = 0, x, o, y, i = 0;
	

	scanf("%d", &t);

	for (int q = 0; q < t; q++)
	{
		scanf("%d %d", &x, &y);

		char arr[101];
		scanf("%s", arr);

		o = 0;
		while (arr[o] != 0)
			o++;

		int invalid = 0;

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

			if (x < -30 || x > 30 || y < -60 || y > 60) 
			{
				invalid = 1;
				break;
			}
		}
		
		if (invalid) 
		{
			printf("invalid\n");
		}
		else 
		{
			printf("%d %d\n", x, y);
		}
	}

	return 0;
}
/**************************************************************
	Problem: 1128
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

