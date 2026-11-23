#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;

	for (int T = 0; T < t; T++)
	{
		int n, m;
		cin >> n >> m;

		deque<pair<int, bool>> q;

		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;

			q.push_back({ x, i == m });
		}

		int count = 0;

        while (!q.empty()) 
        {
            int cur_priority = q.front().first;
            bool is_target = q.front().second;

            bool has_higher = false;

            for (int i = 1; i < q.size(); i++) 
            {
                if (q[i].first > cur_priority) 
                {
                    has_higher = true;
                    break;
                }
            }

            if (has_higher) 
            {
                q.push_back(q.front());
                q.pop_front();
            }

            else 
            {
                count++;

                if (is_target) 
                {
                    cout << count << '\n';
                    break;
                }

                q.pop_front();
            }
        }
	}

	

	return 0;
}