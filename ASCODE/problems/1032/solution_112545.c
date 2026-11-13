#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		char sen[2001];
		scanf("%s", sen);

		int len = strlen(sen);

		for (int i = 0; i < len; i++)
		{
			if (sen[i] >= 'a' && sen[i] <= 'z')
			{
				sen[i] = toupper(sen[i]);				
			}

			else if (sen[i] >= 'A' && sen[i] <= 'Z')
			{
				sen[i] = tolower(sen[i]);
			}
		}

		printf("%s\n", sen);
	}
	return 0;
}
/**************************************************************
	Problem: 1032
	Language: C
	Result: Accepted
	Time:7 ms
	Memory:1120 kb
****************************************************************/

