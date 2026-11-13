#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 200;
int n, test, k[MAX_N];
int kk[MAX_N * MAX_N];

bool BinSearch2(int x);
bool Found(int k[], int n, int m);

int main()
{
    bool f;
    cin >> n >> test;
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }

    for (int c = 0; c < n; c++)
    {
        for (int d = 0; d < n; d++)
        {
            kk[c * n + d] = k[c] + k[d];
        }
    }

    sort(kk, kk + n * n);

    for (int T = 0; T < test; T++)
    {
        int m;
        cin >> m;

        f = Found(k, n, m);

        if (f)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

bool Found(int k[], int n, int m)
{
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            if (BinSearch2(m - k[a] - k[b]))
            {
                return true;
            }
        }
    }
    return false;
}

bool BinSearch2(int x)
{
    int left = 0, right = n * n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (kk[mid] == x)
            return true;

        else if (kk[mid] < x)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return false;
}
/**************************************************************
	Problem: 1427
	Language: C++
	Result: Accepted
	Time:11 ms
	Memory:2184 kb
****************************************************************/

