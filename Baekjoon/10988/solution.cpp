#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	char word[101] = {};

	scanf("%s", &word);

	for (int i = 0; i < strlen(word) / 2; i++)
	{
		if (word[i] != word[strlen(word) - i - 1])
		{
			printf("0");
			return 0;
		}
			
	}
	printf("1");
	return 0;
}
