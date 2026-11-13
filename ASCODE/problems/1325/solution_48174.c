#pragma warning(disable:4996)
#include <stdio.h> 

int main(void)
{

    int input = 0, result = 0;
    int remain[10] = {};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &input);
        remain[i] = (input % 42);
    }

    for (int i = 0; i < 10; i++)
    {
        int count = 0;

        for (int k = i + 1; k < 10; k++)
        {
            if (remain[i] == remain[k])
                count++;
        }

        if (count == 0)
            result++;
    }
    printf("%d", result);
}
/**************************************************************
	Problem: 1325
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

