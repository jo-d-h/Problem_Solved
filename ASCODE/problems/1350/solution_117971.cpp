#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        char s[1000];

        cin >> s;

        char s_p[1000];

        int len = strlen(s);

        for (int i = 0; i < len; i++)
        {
            s_p[i] = s[len - i - 1];
        }

        int yes = 1;
        int count = 0;

        for (int i = 0; i < len; i++)
        {
            if (s[i] != s_p[i])
            {
                yes = 0;
            }

            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count++;
            }
        }

        if (yes)
        {
            cout << "Same " << count << endl;
        }

        else
        {
            cout << "Not_Same " << count << endl;
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1350
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

