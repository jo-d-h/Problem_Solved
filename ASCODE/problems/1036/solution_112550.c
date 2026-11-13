#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int d, u, h;
	scanf("dside : %d, uside : %d, height : %d", &d, &u, &h);

	double area;
	area = (double)(d + u) * h / 2.0;
	printf("%.1f", area);
}
/**************************************************************
	Problem: 1036
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

