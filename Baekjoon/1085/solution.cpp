#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() 
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int min = x;

	if (min > w - x)
		min = w - x;

	if (min > h - y)
		min = h - y;

	if (min > y)
		min = y;

	printf("%d", min);
}