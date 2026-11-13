#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
	int t, n;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		char name[10] = { 'A','B','C','D','G','K','M','P','S','W' };

		scanf("%d", &n);
		char arr[20][21];

		int layor = (n + 1) / 2;

		//배열에 알파벳 채워넣기
		for (int step = 0; step < layor; step++)
		{
			//위
			for (int j = step; j < n - step; j++)
			{
				arr[step][j] = name[layor - step - 1];
			}
			//아래
			for (int j = step; j < n - step; j++)
			{
				arr[n - step - 1][j] = name[layor - step - 1];
			}
			//왼쪽
			for (int j = step; j < n - step; j++)
			{
				arr[j][step] = name[layor - step - 1];
			}
			//오른쪽
			for (int j = step; j < n - step; j++)
			{
				arr[j][n - step - 1] = name[layor - step - 1];
			}
		}

		//출력
		for (int j = 0; j < n; j++)
		{
			arr[j][n] = '\0';
			printf("%s\n", arr[j]);
		}

		if (i < t - 1)
			printf("\n");
	}

	return 0;
}
/**************************************************************
	Problem: 1349
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

