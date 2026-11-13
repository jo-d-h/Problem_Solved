#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    const string coffee = "ABCGJLMPT";

    for(int T = 0; T < t; T++) 
    {
        int n;
        cin >> n;

        vector<vector<char>> farm(n, vector<char>(n, ' '));

        for (int layer = 0; layer < (n + 1) / 2 && layer < 9; layer++) 
        {
            char c = coffee[layer];
            for (int i = layer; i < n - layer; i++) {
                farm[layer][i] = c;
                farm[n - 1 - layer][i] = c;
            }
            // 좌우
            for (int i = layer + 1; i < n - 1 - layer; i++) 
            {
                farm[i][layer] = c;
                farm[i][n - 1 - layer] = c;
            }
        }

        // 출력
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++)
                cout << farm[i][j];

            cout << endl;
        }

        if (t) 
            cout << endl;
    }

    return 0;
}

/**************************************************************
	Problem: 1303
	Language: C++
	Result: Accepted
	Time:5 ms
	Memory:2028 kb
****************************************************************/

