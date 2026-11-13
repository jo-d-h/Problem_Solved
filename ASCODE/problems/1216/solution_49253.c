#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[21];
	char s2[21];
	int len1, len2;
	int result;

	scanf("%s %s", s1, s2);
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (len1 > len2)
		printf("%s", s1);
	else if (len1 < len2)
		printf("%s", s2);
	else
	{
		result = strcmp(s1, s2);
		if (result < 0)
			printf("%s", s1);
		else
			printf("%s", s2);
	}
}

/**************************************************************
	Problem: 1216
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

