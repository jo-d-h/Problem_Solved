#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

char str[1000001];
int a[1000001];


int main()
{
	scanf("%s", str);

	int n;
	scanf("%d", &n);

	int count = 0;
	int len = strlen(str);

	for (int i = 1; i < len; i++)
	{
		if (str[i - 1] != str[i])
			count++;

		a[i] = count;
	}

	for (int T = 0; T < n; T++)
	{
		int i, j;
		scanf("%d %d", &i, &j);

		if (a[i] == a[j])
			printf("Yes\n");

		else
			printf("No\n");
	}

	return 0;
}
/**************************************************************
	Problem: 1269
	Language: C++
	Result: Accepted
	Time:85 ms
	Memory:6000 kb
****************************************************************/

