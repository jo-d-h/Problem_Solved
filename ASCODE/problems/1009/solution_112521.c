#pragma warning (disable:4996)
#include <stdio.h>
#include <ctype.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		char c;
		scanf(" %c", &c);

		if (c >= 'a' && c <= 'z')
			printf("%c\n", toupper(c));
		else if (c >= 'A' && c <= 'Z')
			printf("%c\n", tolower(c));
		else
			printf("%c\n", c);
	}
	return 0;
}
/**************************************************************
	Problem: 1009
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

