//ascode 1006
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() 
{
	char TestCase[2001];
	int count = 0;
	int t = 0;
	int f = 0;
	
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%s", &TestCase);
		for (f = 60; f < 130; f++)
		{
			for (int k = 0; k < strlen(TestCase); k++)
			{
				if (f == TestCase[k])
					count++;
			}

			if (count > 0)
			{
				printf("%c:%d\n", f, count);
				count = 0;
			}
		}
		printf("\n");
	}
	return 0;
}
/**************************************************************
	Problem: 1006
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

