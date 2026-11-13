#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning(disable:4996)

int main() 
{
    char n[21];
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        scanf("%s", n);

        int change = 0, test = 0;

        for (int i = strlen(n) - 1; i >= 0; i--)
        {
            change += (n[test] - '0') * pow(2, i);
            test++;
        }

        printf("%d\n", change);
    }

    return 0;
}
/**************************************************************
	Problem: 1251
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1308 kb
****************************************************************/

