#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int result = 0;
    int x;
    for (int i = 0; i < n; i++) 
    {
        cin >> x;
        result ^= x;
    }

    cout << result << '\n';
    return 0;
}

/**************************************************************
	Problem: 1505
	Language: C++
	Result: Accepted
	Time:805 ms
	Memory:2024 kb
****************************************************************/

