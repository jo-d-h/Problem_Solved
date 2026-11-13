#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main() {

    long long n;

    while (scanf("%lld", &n) != EOF) //정수 n 입력
    {
        char binary[70]; //2진수 저장
        int idx = 0;

        // 정수 n -> 뒤집힌 2진수
        while (n > 0)
        {
            binary[idx++] = (n % 2) + '0';
            n /= 2;
        }

        long long result = 0;

        //뒤집힌 2진수 -> 안뒤집힌 10진수
        for (int i = 0; i < idx; i++)
        {
            result = result * 2 + (binary[i] - '0');
        }

        printf("%lld\n", result);
    }

    return 0;
}

/**************************************************************
	Problem: 1509
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

