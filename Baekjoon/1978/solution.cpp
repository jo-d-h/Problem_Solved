#include <iostream>
#include <cmath>
using namespace std;

const int LIMIT = 10001;
bool a[LIMIT] = { 1, 1, 0 }; // 3번째부터 모두 0으로 초기화

void prime_init()
{
    int i, j;
    int sqrtlimit = (int)sqrt((double)LIMIT);

    for (i = 2; i <= sqrtlimit; i++)
    {
        if (!a[i]) // 아직 체크되지 않은 경우
        {
            for (j = i * i; j < LIMIT; j = j + i)
            {
                // 10,000까지 각 배수를 소수가 아닌 것으로 체크
                a[j] = 1;
            }
        }
    }
}

int main()
{
    int n;
	cin >> n;

    prime_init();

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int r;
        cin >> r;

		if (!a[r])
		{
			count++;
		}
    }

	cout << count << endl;

    return 0;
}