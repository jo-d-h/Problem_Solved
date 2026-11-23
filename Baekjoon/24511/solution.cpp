#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> type(n);

    for (int i = 0; i < n; i++)
        cin >> type[i];

    deque<int> q;

    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;

        if (type[i] == 0) // 큐만 보관!
            q.push_back(x);
    }

    int m;
    cin >> m;

    for (int M = 0; M < m; M++)
    {
        int x;
        cin >> x;

        q.push_front(x);     // 앞에 삽입
        cout << q.back() << ' '; // 마지막 값이 출력
        q.pop_back();        // 출력 후 제거
    }

    return 0;
}
