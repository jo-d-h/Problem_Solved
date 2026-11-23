#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int x[100000] = {};
int y[100000] = {};

int main()
{
	int n;
	scanf("%d", &n);

	
	int min_x, max_x, min_y, max_y;

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}

	min_x = x[0];
	max_x = x[0];
	min_y = y[0];
	max_y = y[0];

	for (int i = 0; i < n; i++)
	{
		if (min_x > x[i])
			min_x = x[i];
		if (min_y > y[i])
			min_y = y[i];
		if (max_x < x[i])
			max_x = x[i];
		if (max_y < y[i])
			max_y = y[i];
	}

	int arr;

	arr = (max_x - min_x) * (max_y - min_y);
	printf("%d", arr);
}