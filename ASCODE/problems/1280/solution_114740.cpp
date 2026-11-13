#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        char num[6];
        scanf("%s", num);

        char reversed[6];
        for (int i = 0; i < 5; i++)
        {
            reversed[i] = num[4 - i];
        }
        reversed[5] = '\0';


        int a = atoi(num);
        int b = atoi(reversed);

        if (a == b)
            printf("SAME\n");

        else if (a > b)
        {
            printf("%d\n", (a - b) % 51);
        }
        else
        {
            printf("%d\n", (b - a) % 51);
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1280
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

