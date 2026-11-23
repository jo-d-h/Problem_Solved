#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main()
{
    double credit = 0.0;      // 학점
    char name[50];            // 과목명
    char grade[3];            // 성적 (예: "A+", "B0")
    double sum = 0.0;         // 총 학점의 합
    double sumgrade = 0.0;    // 성적 * 학점의 합
    double tmp = 0.0;         // 성적 환산값

    for (int i = 0; i < 20; i++)
    {
        scanf("%s %lf %s", name, &credit, grade);

        // Pass 과목은 평점에 포함하지 않음
        if (grade[0] == 'P')
            continue;

        sum += credit;

        if (grade[0] == 'A')
            tmp = 4.0;
        else if (grade[0] == 'B')
            tmp = 3.0;
        else if (grade[0] == 'C')
            tmp = 2.0;
        else if (grade[0] == 'D')
            tmp = 1.0;
        else if (grade[0] == 'F')
            tmp = 0.0;

        if (grade[1] == '+')
            tmp += 0.5;

        sumgrade += credit * tmp;
    }

    printf("%.6f\n", sumgrade / sum);

    return 0;
}