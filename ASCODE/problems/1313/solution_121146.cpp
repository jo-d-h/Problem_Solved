#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

bool isOperator(const string& s)
{
    return s == "+" || s == "-" || s == "*" || s == "/";
}

int main()
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        int n;
        cin >> n;

        vector<string> tokens(n);

        for (int i = 0; i < n; i++)
        {
            cin >> tokens[i];
        }

        stack<int> st;

        bool incorrect = false;

        for (const string& token : tokens)
        {
            if (isOperator(token))
            {
                if (st.size() < 2)
                {
                    incorrect = true;
                    break;
                }

                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                int res = 0;

                if (token == "+")
                    res = a + b;

                else if (token == "-")
                    res = a - b;

                else if (token == "*")
                    res = a * b;

                else if (token == "/")
                    res = a / b;

                st.push(res);
            }

            else
            {
                st.push(atoi(token.c_str()));
            }
        }

        if (!incorrect && st.size() == 1)
        {
            cout << st.top() << endl;
        }

        else
        {
            cout << "Incorrect Expression!" << endl;
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1313
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2032 kb
****************************************************************/

