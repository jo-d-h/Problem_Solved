#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        char ch;
        scanf("%d%c", &n, &ch);  // 숫자와 바로 뒤 문자 입력
        printf("%d %c\n", n, ch);
    }

    return 0;
}
/**************************************************************
	Problem: 1261
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

