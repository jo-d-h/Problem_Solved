#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main()
{
	int t, count = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		char word[101] = {};
		scanf("%s", word);

		int group = 1;

		for (int j = 0; j < strlen(word); j++)
		{
			for (int k = 0; k < j; k++)
			{
				if (word[j] == word[k] && word[j] != word[j - 1])
				{
					group = 0;
					break;
				}
			}

			if (group == 0)
			{
				break;
			}
		}

		if (group == 1)
		{
			count++;
		}
	}

	printf("%d\n", count);
	return 0;
}