#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
	for (int T = 0; T < t; T++)
    {
        int n; 
        cin >> n;

        int layers = (n + 1) / 2;

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                int dist = min(min(i, n - 1 - i), min(j, n - 1 - j));
                cout << layers - dist;
            }
            cout << '\n';
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1023
	Language: C++
	Result: Accepted
	Time:266 ms
	Memory:2184 kb
****************************************************************/

