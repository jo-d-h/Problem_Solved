#pragma warning(disable:4996)
#include <stdio.h> 

int main(void) {

    int a, b, c, d = -1, result, input, count = 0;
    int tcase;

    scanf("%d", &tcase);

    for (int i = 0; i < tcase; i++)
    {
        a, b, c, d = -1, result, input, count = 0;
        scanf("%d", &input);
        result = input;

        while (d != result) 
        {
            a = input / 10;
            b = input % 10;
            c = (a + b) % 10;
            d = (b * 10) + c;
            input = d;
            count++;
        }
        printf("#%d: %d\n", i + 1, count);
    }
}
/**************************************************************
	Problem: 1323
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

