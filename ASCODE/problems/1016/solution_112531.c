#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	double speed, hour;
	scanf("%lf %lf", &speed, &hour);

	double distance = speed * hour;

	printf("%.3lf %.3lf %.2lf", speed, hour, distance);
	
}
/**************************************************************
	Problem: 1016
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

