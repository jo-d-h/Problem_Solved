#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);

		if (a > b) 
		{ 
			int temp = a; 
			a = b; 
			b = temp; 
		}
		if (b > c) 
		{ 
			int temp = b; 
			b = c; 
			c = temp; 
		}
		if (a > b) 
		{ 
			int temp = a; 
			a = b; 
			b = temp; 
		}

		if (a + b <= c)
			printf("No triangle!\n");
		else
		{
			if (a * a + b * b != c * c)
			{
				printf("No right triangle!\n");		
			}
			else
				printf("%d\n", (a + b - c) / 2);
		}

	}

	return 0;
}
/**************************************************************
	Problem: 1340
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

