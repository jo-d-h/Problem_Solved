#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack <int> st;

    while (1)
    {
        char command[6];
		cin >> command;

        if (strcmp(command , "PUSH") == 0)
        {
            int su;
			cin >> su;

            st.push(su);
        }

        else if (strcmp(command, "POP") == 0)
        {
            if (st.size() == 0)
                cout << "ERROR\n";

            else
            {
                cout << st.top() << '\n';
				st.pop();
            }
        }

        else if (strcmp(command, "SIZE") == 0)
        {
            cout << st.size() << '\n';
        }


        else if (strcmp(command, "CLEAR") == 0)
        {
			while (st.empty() == false)
			{
				st.pop();
			}
        }

        else if (strcmp(command, "END") == 0)
        {
            break;
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1311
	Language: C++
	Result: Accepted
	Time:5 ms
	Memory:2184 kb
****************************************************************/

