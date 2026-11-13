#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++) 
    {
        char num[5];
        scanf("%s", num);

        char reversed[5];
        for (int i = 0; i < 4; i++) 
        {
            reversed[i] = num[3 - i];
        }
        reversed[4] = '\0';


        int a = atoi(num);
        int b = atoi(reversed);

        if (a > b) 
        {
            printf("%d\n", a);
        }
        else {
            printf("%d\n", b);
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1249
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

