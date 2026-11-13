#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1)
    {
        string par;
        getline(cin, par);

        if (par == ".")
        {
            break;
        }

        stack <char> st;
        bool yes = 1;

        for (int i = 0; i < par.length(); i++)
        {

            if (par[i] == '(' || par[i] == '[' || par[i] == '{')
            {
                st.push(par[i]);
            }

            else if (par[i] == ')')
            {
                if (!st.empty() && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    yes = 0;
                    break;
                }
            }

            else if (par[i] == '}')
            {
                if (!st.empty() && st.top() == '{')
                {
                    st.pop();
                }
                else
                {
                    yes = 0;
                    break;
                }
            }

            else if (par[i] == ']')
            {
                if (!st.empty() && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    yes = 0;
                    break;
                }
            }
        }

        if (yes && st.empty())
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }

        while (!st.empty())
        {
            st.pop();
        }
    }

    return 0;

}
/**************************************************************
	Problem: 1539
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2188 kb
****************************************************************/

