#include <iostream>
#include <cmath>
using namespace std;

const int LIMIT = 1000001;
bool p[LIMIT]; // p[i] == true 면 소수 아님

void prime_init()
{
    p[0] = p[1] = true;
    for (int i = 2; i * i < LIMIT; i++)
    {
        if (!p[i])
        {
            for (int j = i * i; j < LIMIT; j += i)
                p[j] = true;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    prime_init();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int count = 0;

        for (int a = 2; a <= n / 2; a++)
        {
            int b = n - a;
            if (!p[a] && !p[b])
                count++;
        }

        cout << count << '\n';
    }

    return 0;
}
