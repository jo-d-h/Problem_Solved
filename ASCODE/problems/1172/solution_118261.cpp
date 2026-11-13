#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

struct drink
{
    char name[21];
    int price;
};

int main()
{
    struct drink neww[11];
    struct drink find[31];

    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        int m, n;
        cin >> m >> n;

        for (int i = 0; i < m; i++)
        {
            cin >> neww[i].name >> neww[i].price;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> find[i].name;
        }

        int total = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (strcmp(neww[j].name, find[i].name) == 0)
                {
                    total += neww[j].price;
                }
            }
        }

        int min_paper = ((total + 999) / 1000) * 1000;
        int coin = min_paper - total;

        int paper = min_paper;
        int bill_count = 0;
        int bills[4] = { 50000, 10000, 5000, 1000 };

        for (int i = 0; i < 4; i++) 
        {
            bill_count += paper / bills[i];
            paper %= bills[i];
        }

        int remain = coin;

        int five_h = remain / 500;
        remain %= 500;

        int one_h = remain / 100;
        remain %= 100;

        int fifty = remain / 50;
        remain %= 50;

        int ten = remain / 10;

        cout << total << " " << min_paper << " " << bill_count << " " << coin << "(500:" << five_h << " 100:" << one_h << " 50:" << fifty << " 10:" << ten << ")" << endl;
    }

    return 0;
}
/**************************************************************
	Problem: 1172
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2028 kb
****************************************************************/

