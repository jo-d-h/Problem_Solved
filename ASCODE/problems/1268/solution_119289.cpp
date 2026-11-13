#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

#define MAX 110

int compare(char* a, char* b) 
{
    int lenA = strlen(a), lenB = strlen(b);

    if (lenA > lenB) 
        return 1;

    if (lenA < lenB) 
        return -1;

    return strcmp(a, b);
}

void subtract(char* big, char* small, char* result) 
{
    int lenB = strlen(big), lenS = strlen(small);
    int borrow = 0, i, j, k = 0;
    char temp[MAX] = { 0 };

    for (i = 0; i < lenB; i++) 
    {
        int digitB = big[lenB - 1 - i] - '0';
        int digitS = (i < lenS) ? small[lenS - 1 - i] - '0' : 0;
        int diff = digitB - digitS - borrow;

        if (diff < 0) 
        {
            diff += 10;
            borrow = 1;
        }

        else 
        {
            borrow = 0;
        }

        temp[k++] = diff + '0';
    }

    while (k > 1 && temp[k - 1] == '0') 
        k--;

    for (j = 0; j < k; j++)
        result[j] = temp[k - 1 - j];

    result[k] = '\0';
}

int main() 
{
    int T;
    char M[MAX], N[MAX], result[MAX];

    scanf("%d", &T);

    for (int t = 0; t < T; t++) 
    {
        scanf("%s %s", M, N);
        int cmp = compare(M, N);

        if (cmp == 0) 
        {
            printf("0\n");
        }

        else if (cmp > 0) 
        {
            subtract(M, N, result);
            printf("%s\n", result);
        }

        else 
        {
            subtract(N, M, result);
            printf("-%s\n", result);
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1268
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

