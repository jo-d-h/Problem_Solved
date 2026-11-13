#pragma warning(disable:4996)
#include <stdio.h>
#include <limits.h> 

int matrix[300][300];

int main() 
{
    int t;
    scanf("%d", &t);

    for (int tcase = 0; tcase < t; tcase++) 
    {
        int w, h, s;
        scanf("%d %d", &w, &h);

        for (int i = 0; i < h; i++) 
        {
            for (int j = 0; j < w; j++) 
            {
                scanf("%d", &matrix[i][j]);
            }
        }

        scanf("%d", &s);
        int max_sum = INT_MIN;

        for (int i = 0; i < h - s + 1; i++) 
        {
            for (int j = 0; j < w - s + 1; j++) 
            {
                int now_sum = 0;
                for (int x = 0; x < s; x++) {
                    for (int y = 0; y < s; y++) 
                    {
                        now_sum += matrix[i + x][j + y];
                    }
                }
                if (now_sum > max_sum) 
                {
                    max_sum = now_sum;
                }
            }
        }
        printf("%d\n", max_sum);
    }
    return 0;
}
/**************************************************************
	Problem: 1400
	Language: C
	Result: Accepted
	Time:651 ms
	Memory:1472 kb
****************************************************************/

