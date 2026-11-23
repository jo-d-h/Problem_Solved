#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	char word[100] = {};

	int apbt[26] = {};
	int len, index;

	for (int i = 0; i < 26; i++)
	{
		apbt[i] = -1;
	}

	scanf("%s", word);

	len = strlen(word);

	for (int i = 0; i < len; i++)
	{
		index = word[i] - 'a';

		if (apbt[index] == -1)
		{
			apbt[index] = i;
		}
		else 
		{
			continue;
		}

	}

	for (int i = 0; i < 26; i++)
		printf("%d ", apbt[i]);

	return 0;
}