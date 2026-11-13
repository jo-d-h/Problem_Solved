#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        char s[51], c[51];

        cin >> s;
        cin >> c;

        int len = strlen(c);
        int now = 0;


        for (int i = 0; i < len; i++)
        {
            if (s[now] == c[i])
            {
                now++;
            }
        }

        cout << (now + 1) << endl;
    }

    return 0;

}
/**************************************************************
	Problem: 1538
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2184 kb
****************************************************************/

