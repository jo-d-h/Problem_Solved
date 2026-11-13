#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

struct Drink
{
    char name[16];
    int price;
};

int main() 
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++) 
    {
        int n; //음료 개수
        scanf("%d", &n);

        Drink menu[16];

        for (int i = 0; i < n; i++)
        {
            scanf("%s %d", menu[i].name, &menu[i].price);
        }

        int num; //구매할 개수
        scanf("%d", &num);

        int sum = 0; //총가격

        for (int i = 0; i < num; i++)
        {
            char buy_name[16];
            int buy_num;

            scanf("%s %d", buy_name, &buy_num);

            for (int j = 0; j < n; j++)
            {
                if (strcmp(buy_name, menu[j].name) == 0)
                {
                    sum += menu[j].price * buy_num;
                    break;
                }
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
/**************************************************************
	Problem: 1132
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

