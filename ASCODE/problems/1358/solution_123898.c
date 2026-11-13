#include <stdio.h>

int main() 
{
    int x1, x2, x3;
    int y1, y2, y3;

    scanf("x1: %d, x2: %d, x3: %d\n", &x1, &x2, &x3);
    scanf("y1: %d, y2: %d, y3: %d\n", &y1, &y2, &y3);

    int x4 = x1 ^ x2 ^ x3;
    int y4 = y1 ^ y2 ^ y3;

    printf("%d %d\n", x4, y4);

    return 0;
}

/**************************************************************
	Problem: 1358
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

