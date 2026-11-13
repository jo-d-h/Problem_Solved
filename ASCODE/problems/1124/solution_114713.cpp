#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<int>());

    int m;
    cin >> m;

    cout << arr[m - 1] << endl;

    return 0;
}
/**************************************************************
	Problem: 1124
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

