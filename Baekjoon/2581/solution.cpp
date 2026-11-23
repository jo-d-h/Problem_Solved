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
    prime_init();

    int m, n;
    cin >> m >> n;

    int sum = 0;
    int min = 10001;

    for (int p = m; p <= n; p++)
    {
		if (!a[p]) // 소수인 경우
		{
            sum += p;

            if (p < min)
            {
                min = p;
            }
		}
    }

    if (sum != 0)
        cout << sum << endl << min << endl;
    else
        cout << -1 << endl;


    return 0;
}