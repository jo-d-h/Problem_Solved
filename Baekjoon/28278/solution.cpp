#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    stack <int> st;

    for (int N = 0; N < n; N++)
    {
        int su;
		cin >> su;    

        switch (su)
        {
            case 1:
            {
                int x;
                cin >> x;
                st.push(x);

                break;
            }

            case 2:
            {
                if (st.empty())
                {
                    cout << "-1" << "\n";
                }
                else
                {
					cout << st.top() << "\n";
                    st.pop();
                }

                break;
            }

            case 3:
            {
                cout << st.size() << "\n";

                break;
            }

            case 4:
            {
                if (st.empty())
                {
                    cout << "1" << "\n";
                }
                else
                {
					cout << "0" << "\n";
                }

                break;
            }

            case 5:
            {
                if (st.empty())
                {
                    cout << "-1\n";
                }
                else
                {
                    cout << st.top() << "\n";
                }

                break;
            }
        }
    }

    return 0;
}