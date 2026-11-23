#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
	cin >> n;

    int arr[1001];
    stack<int> s; //기존 줄 선곳
    stack<int> s2;//대기장소(1열로)

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; //입력
    }

    for (int i = n - 1; i >= 0; i--) //역순으로 스텍 저장
    {
		s.push(arr[i]);
    }

    int k = 1;

    while (!s.empty() || (!s2.empty() && s2.top() == k))
    {
		if (!s2.empty() && s2.top() == k) //대기장소에 있는 사람이 현재 줄에 서야하는 사람이라면
		{
			s2.pop(); //대기장소에서 제거
			k++; //다음 사람으로 이동
		}
		else if (!s.empty()) //기존 줄에 사람이 있다면
		{
			if (s.top() == k) //현재 줄에 서야하는 사람이라면
			{
				s.pop(); //줄에서 제거
				k++; //다음 사람으로 이동
			}

			else //현재 줄에 서야하는 사람이 아니라면
			{
				s2.push(s.top()); //대기장소로 이동
				s.pop(); //줄에서 제거
			}
		}
    }

    //출력
    if (k == n + 1) 
        cout << "Nice\n";
    else 
        cout << "Sad\n";

    return 0;

}