#pragma warning (disable:4996)
#include<stdio.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        char A = (char)a;
        char B = (char)b;

        if (isupper(A) && isupper(B))
            printf("%c%c\n", towlower(A), towlower(B));

        else if (islower(A) && islower(B))
            printf("%c%c\n", toupper(A), toupper(B));

        else if (isalpha(A) && isalpha(B))
            printf("%c%c\n", A, B);

        else
            printf("No Alphabet!\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1194
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1124 kb
****************************************************************/

