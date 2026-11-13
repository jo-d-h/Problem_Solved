#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            char alpabet = 'A' + i;
            for (int j = 0; j < n - i; j++)
            {
                
                printf("%c", alpabet);
            }
            printf("\n");
            

            
                
        }
        printf("\n");
    }


    return 0;
}
/**************************************************************
	Problem: 1173
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

