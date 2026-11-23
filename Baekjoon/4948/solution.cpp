#include <iostream>
#include <cmath>
using namespace std;

const int LIMIT = 250000;
bool p[LIMIT] = { 1, 1, 0 }; // 3번째부터 모두 0으로 초기화

void prime_init()
{
    int i, j;
    int sqrtlimit = (int)sqrt((double)LIMIT);

    for (i = 2; i <= sqrtlimit; i++)
    {
        if (!p[i]) // 아직 체크되지 않은 경우
        {
            for (j = i * i; j < LIMIT; j = j + i)
            {
                // 10,000까지 각 배수를 소수가 아닌 것으로 체크
                p[j] = 1;
            }
        }
    }
}

int main()
{
    prime_init();

    while (1)
    {
        int n;
        cin >> n;

        if (n == 0)
            break;

        int count = 0;

        for (int i = n + 1; i <= 2 * n; i++)
        {
            if (!p[i])
				count++;			
        }

        cout << count << endl;
    }

    return 0;
}