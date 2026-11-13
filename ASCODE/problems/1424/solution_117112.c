#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int n;
        scanf("%d", &n);
        for (int N = 0; N < n; N++)
        {
            char name[11];
            int num;
            int su[5];

            scanf("%s", name);
            scanf("%d", &num);

            int sum = 0;
            int max = 0;

            for (int i = 0; i < 5; i++)
            {
                scanf("%d", &su[i]);
                sum += su[i];

                if (su[i] > max)
                    max = su[i];
            }

            float avg = (float)sum / 5;

            printf("%s %d %.2lf\n", name, max, avg);
            
        }
        printf("\n");
    }


    return 0;
}
/**************************************************************
	Problem: 1424
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

