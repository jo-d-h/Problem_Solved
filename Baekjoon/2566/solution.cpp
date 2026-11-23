#pragma warning(disable:4996)
#include <stdio.h>


int main(void)
{
    int arr = 0;
    int max = 0;
    int n = 0, m = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &arr);
            if (arr > max)
            {
                max = arr;
                n = i;
                m = j;
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d\n", n + 1, m + 1);

    

}