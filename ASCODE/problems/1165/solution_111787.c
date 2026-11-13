#include <stdio.h>
#include <math.h> 
#pragma warning (disable:4996)

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int stu;
        scanf("%d", &stu);

        int sum = 0;
        int s[20] = {};

        for (int k = 0; k < stu; k++)
        {
            scanf("%d", &s[k]);
            sum += s[k];
        }

        float avg = (float)sum / stu;

        float best = fabs(s[0] - avg);
        int p = 0;

        for (int k = 1; k < stu; k++)
        {
            float diff = fabs(s[k] - avg);

            if (diff < best)
            {
                best = diff;
                p = k;
            }
        }

        printf("%d\n", s[p]);
    }
    return 0;
}
/**************************************************************
	Problem: 1165
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

