#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main()
{
	int t, counts = 0;
	char word[1024] = {};

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%s", &word);
		counts = strlen(word);

		for (int i = 0; i < counts; i++)
		{
			if (word[i] < 91 && word[i] > 64)
			{
				if (word[i] == 90) 
				{
					word[i] = 65;
				}
				else 
				{
					word[i]++;
				}
			}
		}
		printf("%s\n", word);
	}
}

/**************************************************************
	Problem: 1019
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

