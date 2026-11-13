#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int arr[51];

	for (int a = 0; a < 50; a++)
	{
		arr[a] = a;
	}

	for (int a = 0; a < m; a++)
	{
		int i, j;
		int tmp = 0;
		scanf("%d %d", &i, &j);

		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}

	for (int a = 0; a < n; a++)
	{
		printf("%d ", arr[a]);

	}
}
/**************************************************************
	Problem: 1388
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

