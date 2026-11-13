#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

int roma_to_integer(char c)
{
	switch(c) 
	{
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
	}
}

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		char roma[16];
		int change = 0;

		scanf("%s", roma); //로마문자 입력

		int len = strlen(roma);
		int now = 0, next = 0;

		for (int i = 0; i < len; i++)
		{
			int now = roma_to_integer(roma[i]);
			int next = roma_to_integer(roma[i + 1]);

			if (next > now)
				change -= now;
			else
				change += now;
		}

		printf("%d\n", change);
	}
	return 0;
}
/**************************************************************
	Problem: 1504
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1124 kb
****************************************************************/

