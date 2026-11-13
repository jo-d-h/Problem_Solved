#pragma warning (disable:4996)
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        int a[3], a_sum = 0, a_even = 0, a_win = 0;
        int b[3], b_sum = 0, b_even = 0, b_win = 0;

        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            a_sum += a[i];

            if (a[i] % 2 == 0)
                a_even++;
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> b[i];
            b_sum += b[i];

            if (b[i] % 2 == 0)
                b_even++;
        }

        sort(a, a + 3);
        sort(b, b + 3);

        int a_maxmin = a[2] - a[0];
        int b_maxmin = b[2] - b[0];

        if (a_sum > b_sum)
            a_win = 1;
        else if (b_sum > a_sum)
            b_win = 1;

        else if (a_maxmin > b_maxmin)
            a_win = 1;
        else if (b_maxmin > a_maxmin)
            b_win = 1;

        else if (a_even > b_even)
            a_win = 1;
        else if (b_even > a_even)
            b_win = 1;
        
        if (a_win)
            printf("Jiwon wins.\n");
        else if (b_win)
            printf("Seungwhan wins.\n");
        else
            printf("Draw!\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1373
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2028 kb
****************************************************************/

