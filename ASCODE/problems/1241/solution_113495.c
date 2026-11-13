#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int x = (a + b) / (c + d);
	int y = (a + b) % (c + d);
	float z = (float)(a + b) / (c + d);

	printf("%d %d %.5f\n", x, y, z);
}
/**************************************************************
	Problem: 1241
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

