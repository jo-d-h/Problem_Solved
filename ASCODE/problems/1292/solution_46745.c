#include <stdio.h>

int  t, i; 

int main()
{
	scanf("%d", &t); 

	for (int i = 0; i < t; i++) 
	{
		int stdnt = 0;
		int total = 0;
		int score[999] = {};
		int avg = 0;
		int over = 0;

		scanf("%d\n", &stdnt); 

		for (int p = 0; p < stdnt; p++)
		{
			scanf("%d", &score[p]); 
			total += score[p];
		}

		avg = total / stdnt;

		for (int p = 0; p < stdnt; p++)
		{
			if (avg < score[p])
			{
				over++;
			}
		}
		printf("%d from total %d\n", over, stdnt);
	}
}
/**************************************************************
	Problem: 1292
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

