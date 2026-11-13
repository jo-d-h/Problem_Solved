#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        char arr1[5];
        char arr2[5];

        scanf("%s %s", arr1, arr2);

        int money = 0;

        for (int i = 0; i < 4; i++)
        {
            if (arr1[i] == arr2[i])
                money += 30000;
            else
            {
                for (int j = 0; j < 4; j++)
                {
                    if (arr1[i] == arr2[j])
                    {
                        money += 5000;
                        break;
                    }
                }
            }
        }

        if (money == 0)
            money += 50000;

        printf("%d\n", money);
    }

    return 0;
}
/**************************************************************
	Problem: 1281
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

