#include <iostream>
#include <cmath>
using namespace std;

const int LIMIT = 1000001;
bool p[LIMIT] = { 1, 1, 0 }; // 3번째부터 모두 0으로 초기화
int prime_list[LIMIT];      // 소수 리스트
int prime_cnt = 0;

void prime_init()
{
    int i, j;
    int sqrtlimit = (int)sqrt((double)LIMIT);

    for (i = 2; i <= sqrtlimit; i++)
    {
        if (!p[i]) // 아직 체크되지 않은 경우
        {
            for (j = i * i; j < LIMIT; j += i)
            {
                // 10,000까지 각 배수를 소수가 아닌 것으로 체크
                p[j] = 1;
            }
        }
    }

    for (i = 3; i < LIMIT; i += 2)
    {
        if (!p[i])
            prime_list[prime_cnt++] = i;
    }
}

int main()
{
    prime_init();

    int n;

    while (cin >> n && n != 0)
    {
        bool found = false;

        for (int i = 0; i < prime_cnt && prime_list[i] <= n / 2; i++)
        {
            int a = prime_list[i];
            int b = n - a;

            if (!p[b])
            {
                cout << n << " = " << a << " + " << b << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << "Goldbach's conjecture is wrong." << endl;
    }

    return 0;
}
/**************************************************************
	Problem: 1256
	Language: C++
	Result: Accepted
	Time:859 ms
	Memory:6908 kb
****************************************************************/

