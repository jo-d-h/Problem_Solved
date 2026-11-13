#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	int t;
	scanf("%d", &t);
	
	for (int T = 0; T < t; T++)
	{
		char s[1000];

		int alphabet[130];

		for (int i = 0; i < 130; i++)
		{
			alphabet[i] = { 0 };
		}
		
		scanf("%s", s);

		int len = strlen(s);
		
		if (len == 2)
			printf("0\n");
		else
		{
			for (int i = 1; i < len; i += 2)
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					int tmp = (int)s[i];

					alphabet[tmp] += 1;

				}
			}

			int count = 0;

			for (int i = 97; i <= 122; i++)
			{
				if (alphabet[i] > 0)
					count++;
			}

			printf("%d\n", count);
		}
	}

	return 0;
}
/**************************************************************
	Problem: 1502
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

