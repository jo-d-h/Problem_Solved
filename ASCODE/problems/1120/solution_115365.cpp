#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main() 
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int n;
        scanf("%d", &n);

        double arr[20], sum = 0;

        for (int i = 0; i < n; i++) 
        {
            scanf("%lf", &arr[i]);
            sum += arr[i];
        }

        double min = arr[0], max = arr[0];

        for (int i = 1; i < n; i++) 
        {
            if (arr[i] < min)
                min = arr[i];
            if (arr[i] > max)
                max = arr[i];
        }

        double new_sum = sum - min - max;
        double avg = new_sum / (n - 2);

        double closest = arr[0];
        double min_diff = fabs(arr[0] - avg);

        for (int i = 1; i < n; i++) 
        {
            double diff = fabs(arr[i] - avg);

            if (diff < min_diff || (diff == min_diff && arr[i] < closest)) 
            {
                min_diff = diff;
                closest = arr[i];
            }
        }

        printf("%.0lf\n", closest);
    }

    return 0;
}

/**************************************************************
	Problem: 1120
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

