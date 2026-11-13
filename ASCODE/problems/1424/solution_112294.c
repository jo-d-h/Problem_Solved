#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        for (int j = 0; j < n; j++)
        {
            char name[11] = {};
            int stunum;
            int grade[6] = {};
            int max_grade = 0;
            int sum_grade = 0;
            float avg_grade = 0;

            scanf("%s %d", name, &stunum);
            
            for (int k = 0; k < 5; k++)
            {
                scanf("%d", &grade[k]);
                
                sum_grade += grade[k];

                if (grade[k] >= max_grade)
                    max_grade = grade[k];
            }

            avg_grade = sum_grade / 5.0;

            printf("%s %d %.2f\n", name, max_grade, avg_grade);
        }

        if (i < t - 1)
            printf("\n");
    }
}
/**************************************************************
	Problem: 1424
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

