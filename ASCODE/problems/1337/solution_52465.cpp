#pragma warning(disable:4996)
#include<stdio.h>
#include <math.h>

struct student
{
	int x[5000] = {};
	int y[5000] = {};
};

int main()
{
	struct student s;

	double xdiff = 0, ydiff = 0;
	double dist = 0, xdist = 0, ydist = 0;
	double cstdist = 100000;
	int n;
	int p1x = 0, p1y = 0, p2x = 0, p2y = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &s.x[i], &s.y[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n; k++)
		{
			if (i == k)
				continue;
			xdiff = s.x[i] - s.x[k];
			ydiff = s.y[i] - s.y[k];
			dist = sqrt(xdiff * xdiff + ydiff * ydiff);

			if (dist < cstdist)
			{
				cstdist = dist;
				xdist = xdiff;
				ydist = ydiff;

				if (s.x[i] < s.x[k])
				{
					p1x = s.x[i];
					p1y = s.y[i];
					p2x = s.x[k];
					p2y = s.y[k];
				}
				else if (s.x[i] > s.x[k])
				{
					p2x = s.x[i];
					p2y = s.y[i];
					p1x = s.x[k];
					p1y = s.y[k];
				}
				else
				{
					if (s.y[i] < s.y[k])
					{
						p1x = s.x[i];
						p1y = s.y[i];
						p2x = s.x[k];
						p2y = s.y[k];
					}
					else
					{
						p2x = s.x[i];
						p2y = s.y[i];
						p1x = s.x[k];
						p1y = s.y[k];
					}
				}
			}
		}
	}

	printf("(%d, %d) (%d, %d)\n", p1x, p1y, p2x, p2y);
}
/**************************************************************
	Problem: 1337
	Language: C++
	Result: Accepted
	Time:87 ms
	Memory:1132 kb
****************************************************************/

