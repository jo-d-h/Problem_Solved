#include <iostream>
#include <algorithm>
using namespace std;

int arr[55];

int main() 
{
    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int min = 1000;

        for (int i = 1; i < n; i++) 
        {
            int diff = arr[i] - arr[i - 1];

            if (diff < min)
            {
                min = diff;
            }
        }

        cout << min << '\n';
    }

    return 0;
}
/**************************************************************
	Problem: 1507
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2028 kb
****************************************************************/

