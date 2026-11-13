#pragma warning (disable:4996)
#include<stdio.h>
#include <ctype.h>

int main()
{
    long long amount, remain;
    scanf("%lld", &amount);
    remain = amount;

    int fiftyt = remain / 50000;
    remain %= 50000;

    int tent = remain / 10000;
    remain %= 10000;

    int fivet = remain / 5000;
    remain %= 5000;

    int onet = remain / 1000;

    printf("%lld %lld %lld %lld\n", fiftyt, tent, fivet, onet);


    return 0;
}
/**************************************************************
	Problem: 1191
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

