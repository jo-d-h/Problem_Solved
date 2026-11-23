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
		printf("%.3lf%%\n", (double)over * 100 / stdnt);
	}
}