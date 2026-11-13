#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int n;

    scanf("%d", &n);

    if (n % 2 == 1 && n % 3 == 0 || (n % 7 == 0 && n % 17 == 0))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
/**************************************************************
	Problem: 1372
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

