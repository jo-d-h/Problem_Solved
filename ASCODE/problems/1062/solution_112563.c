#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
        printf("uppercase\n");
    else if (c >= 'a' && c <= 'z')
        printf("lowercase\n");
    else if (c >= '0' && c <= '9')
        printf("number\n");
    else
        printf("special\n");


    return 0;
}
/**************************************************************
	Problem: 1062
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

