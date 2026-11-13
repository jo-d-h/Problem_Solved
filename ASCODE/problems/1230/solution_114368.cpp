#include <stdio.h>
#include <iostream>
#include<algorithm>
#pragma warning (disable:4996)
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int n;
        cin >> n;

        int bong[10001];
        int bong_max = 0;

        int sum = 0;
        int max_sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> bong[i];
        }

        sort(bong, bong + n);

        for (int i = 0; i < n; i++)
        {
            int x = bong[i];
            int y = bong[i + 1];
            int z = bong[i + 2];

            if (x + y > z && y + z > x && x + z > y)
            {
                sum = x + y + z;
            }

            if (sum > max_sum)
                max_sum = sum;
        }

        if (max_sum > 0)
            cout << max_sum << endl;
        else
            cout << "0" << endl;
    }
}
/**************************************************************
	Problem: 1230
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

