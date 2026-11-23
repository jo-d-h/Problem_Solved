#include <iostream>
#include <cmath>
using namespace std;

const int LIMIT = 1000001;
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

    int a, b;

    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (!p[i]) // 소수인 경우
        {
            cout << i << endl;
        }
    }


    return 0;
}