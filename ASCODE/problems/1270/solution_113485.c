#include <stdio.h>
#pragma warning(disable:4996)

struct Subway
{
	int speed;
	int increase;
};

int getSpeed(int n, int m, struct Subway train[])
{
	int minspeed = train[0].speed;
	int maxspeed = train[0].speed;
	int maxincrease = train[0].increase;

	for (int i = 1; i < n; i++)
	{
		if (train[i].speed < minspeed)
			minspeed = train[i].speed;
		if (train[i].speed > maxspeed)
			maxspeed = train[i].speed;
		if (train[i].increase > maxincrease)
			maxincrease = train[i].increase;
	}
	
	int limitspeed = maxspeed + m * maxincrease;
	int answer = minspeed;

	for (int t = minspeed; t <= limitspeed; t++)
	{
		int cost = 0;

		for (int i = 0; i < n; i++)
		{
			if (train[i].speed < t)
			{
				int charge = (t - train[i].speed + train[i].increase - 1) / train[i].increase;
				cost += charge;
			}

			if (cost > m)
				break;
		}

		if (cost <= m)
			answer = t;
		else
			break;
	}

	return answer;
}

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int n, m;
		scanf("%d %d", &n, &m);

		struct Subway train[100] = {};

		for (int j = 0; j < n; j++)
		{
			scanf("%d", &train[j].speed);
		}

		for (int j = 0; j < n; j++)
		{
			scanf("%d", &train[j].increase);
		}

		printf("%d\n", getSpeed(n, m, train));
	}

	return 0;
}
/**************************************************************
	Problem: 1270
	Language: C
	Result: Accepted
	Time:358 ms
	Memory:1120 kb
****************************************************************/

