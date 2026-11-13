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
        int n;
        int arr[50];

        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] == arr[i] || arr[i] == arr[i + 1])
                arr[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
                printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1262
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2028 kb
****************************************************************/

