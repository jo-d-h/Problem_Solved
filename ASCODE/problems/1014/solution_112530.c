#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int arr[8];
	int sum = 0;

	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	printf("%d", sum / 7);
	
}
/**************************************************************
	Problem: 1014
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

