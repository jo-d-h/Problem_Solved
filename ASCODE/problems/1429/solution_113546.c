#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int t;
    scanf("%d", &t);

    int n; 
    scanf("%d", &n);

    float price;
    price = (float)n / (1 + t / 100.0);

    printf("%.2f\n", price);

    return 0;
}
/**************************************************************
	Problem: 1429
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

