#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int arr[6];
    int sum = 0;
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);

        arr[i] = arr[i] * arr[i];
        sum += arr[i];
    }

    int result = sum % 10;

    printf("%d\n", result);

    return 0;
}
/**************************************************************
	Problem: 1430
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

