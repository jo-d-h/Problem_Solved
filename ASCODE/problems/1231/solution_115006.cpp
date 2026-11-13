#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        //입력
        int a, b;
        cin >> a >> b;

        //최대한 약분
        for (int j = 2; j <= a && j <= b; j++)
        {
            if (a % j == 0 && b % j == 0)
            {
                a /= j;
                b /= j;
            }
        }

        //소인수 분해(2, 5)
        while (b % 2 == 0) 
            b /= 2;
        while (b % 5 == 0) 
            b /= 5;

        if (b == 1)
            cout << "Limited" << endl;
        else
            cout << "Unlimited" << endl;
    }


    return 0;
}
/**************************************************************
	Problem: 1231
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

