#include <stdio.h>
#pragma warning(disable:4996)

char word[20000];

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        scanf("%s", word);
        for (int i = 0; word[i] != '\0'; i++) {
            word[i] ^= 32;
        }
        printf("%s\n", word);
    }

    return 0;
}
/**************************************************************
	Problem: 1033
	Language: C++
	Result: Accepted
	Time:811 ms
	Memory:1140 kb
****************************************************************/

