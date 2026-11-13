#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int* a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        bool found = binary_search(a, a + n, x);

        if (found)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }

    delete[] a;
    return 0;
}

/**************************************************************
	Problem: 1463
	Language: C++
	Result: Accepted
	Time:1753 ms
	Memory:2224 kb
****************************************************************/

