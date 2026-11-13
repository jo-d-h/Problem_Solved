#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int n;
        scanf("%d", &n);

        int arr[21];
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        double avg = (double)sum / (double)n;

        int closest;
        double difference = 10000.0;

        for (int i = 0; i < n; i++)
        {
            double diff = 0.0;

            if (arr[i] >= avg)
                diff = arr[i] - avg;
            else
                diff = avg - arr[i];

            if (diff < difference)
            {
                difference = diff;
                closest = arr[i];
            }

        }

        printf("%d\n", closest);
    }

    return 0;
}
/**************************************************************
	Problem: 1258
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

