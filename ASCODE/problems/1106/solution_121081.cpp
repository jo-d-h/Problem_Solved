#include <iostream>
#include <stack>
#include <cstring>

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
        char par[1001];
        cin >> par;

        stack <char> st;

        int len = strlen(par);

        bool yes = 1;

        for (int i = 0; i < len; i++)
        {
            if (par[i] == '(' || par[i] == '{' || par[i] == '[')
            {
                st.push(par[i]);
            }

            else if (par[i] == ')')
            {
                if (st.empty() || st.top() != '(')
                {
                    yes = 0;
                    break;
                }
                else
                {
                    st.pop();
                }
            }

            else if (par[i] == '}')
            {
                if (st.empty() || st.top() != '{')
                {
                    yes = 0;
                    break;
                }
                else
                {
                    st.pop();
                }
            }

            else if (par[i] == ']')
            {
                if (st.empty() || st.top() != '[')
                {
                    yes = 0;
                    break;
                }
                else
                {
                    st.pop();
                }
            }

            else
            {
                yes = 0;
            }
        }

        if (yes && st.empty())
        {
            cout << "Good!\n";
        }
        else
        {
            cout << "Retry...\n";
        }

        while (!st.empty())
        {
            st.pop();
        }
    }

    return 0;

}
/**************************************************************
	Problem: 1106
	Language: C++
	Result: Accepted
	Time:777 ms
	Memory:2184 kb
****************************************************************/

