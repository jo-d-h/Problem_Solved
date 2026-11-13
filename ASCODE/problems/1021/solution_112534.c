#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		char data[1025];
		scanf("%s", data);
		
		char key[513];
		scanf("%s", key);

		int data_len = strlen(data);
		int key_len = strlen(key);

		char result[1025];
		for (int i = 0; i < data_len; i++)
		{
			result[i] = data[i] ^ key[i % key_len];
		}

		result[data_len] = '\0';
		printf("%s\n", result);
	}
	return 0;
}
/**************************************************************
	Problem: 1021
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

