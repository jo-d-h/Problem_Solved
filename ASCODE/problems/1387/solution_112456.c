#pragma warning (disable:4996)
#include<stdio.h>

int is_magic(int arr[3][3])
{
	//행
	for (int j = 0; j < 3; j++)
	{
		int rowsum = 0;

		for (int k = 0; k < 3; k++)
		{
			rowsum += arr[j][k];
		}

		if (rowsum != 15)
		{
			return 0;
		}
	}

	//열
	for (int j = 0; j < 3; j++)
	{
		int colsum = 0;

		for (int k = 0; k < 3; k++)
		{
			colsum += arr[k][j];
		}

		if (colsum != 15)
		{
			return 0;
		}
	}

	//대각선

	int diag1 = arr[0][0] + arr[1][1] + arr[2][2];
	int diag2 = arr[0][2] + arr[1][1] + arr[2][0];

	if (diag1 != 15 || diag2 != 15)
	{
		return 0;
	}

	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int arr[3][3];

		//배열 입력
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				scanf("%d", &arr[j][k]);
			}
		}

		

		if (is_magic(arr))
			printf("Magic Square!\n");
		else
			printf("No Magic Square!\n");
	}

	return 0;
}
/**************************************************************
	Problem: 1387
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

