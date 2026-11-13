#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#include <math.h>

int main()
{
	int t = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) 
	{
		char orgin[10]; int change = 0, test = 0;
		scanf("%s", &orgin);
		for (int c = strlen(orgin) - 1; c >= 0; c--) 
		{		
			change += ((orgin[test] - 48) * pow(2, c));
			test++;
		}
		printf("%d\n", change);
	}
	return 0;
}
/**************************************************************
	Problem: 1251
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1308 kb
****************************************************************/

