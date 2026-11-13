#pragma warning(disable:4996)
#include <stdio.h>

int getMaxSpeed(int n, int m, int s[], int v[]) // 이진 탐색
{
    int left = s[0], right = s[0], answer = 0;
    int max_v = v[0];

    for (int i = 1; i < n; i++)
    {
        if (s[i] < left)
            left = s[i];
        if (s[i] > right)
            right = s[i];
        if (v[i] > max_v)
            max_v = v[i];
    }

    right += m * max_v;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        int cost = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] < mid)
            {
                int need = (mid - s[i] + v[i] - 1) / v[i];
                cost += need;
            }

            if (cost > m)
                break;
        }

        if (cost <= m)
        {
            answer = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }

    return answer;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d %d", &n, &m); // 열차 수, 투자할 돈

        int s[100];
        int v[100];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &s[j]); // 각 열차의 최대 속력
        }
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &v[j]); // 각 열차의 1원당 속도 증가량
        }

        printf("%d\n", getMaxSpeed(n, m, s, v));
    }
    return 0;
}
/**************************************************************
	Problem: 1270
	Language: C++
	Result: Accepted
	Time:5 ms
	Memory:1120 kb
****************************************************************/

