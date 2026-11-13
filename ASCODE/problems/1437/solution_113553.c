#include <stdio.h>
#include <ctype.h>
#pragma warning(disable:4996)

int main()
{
    char a;
    scanf("%c", &a);

    if (isupper(a))
        printf("%c\n", tolower(a));
    else
        printf("%c\n", toupper(a));

    return 0;
}
/**************************************************************
	Problem: 1437
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

