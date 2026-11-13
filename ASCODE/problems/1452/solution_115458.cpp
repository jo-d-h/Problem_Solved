#pragma warning (disable:4996)
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    while (1)
    {
        int n;
        cin >> n;

        if (n == 0)
            break;

        int arr[101];
        int new_arr[101];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            new_arr[i] = arr[i];
        }

        sort(arr, arr + n);
        sort(new_arr, new_arr + n, greater<int>());

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == new_arr[i])
            {
                count++;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}
/**************************************************************
	Problem: 1452
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2028 kb
****************************************************************/

