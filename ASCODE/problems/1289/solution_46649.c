#include <stdio.h>

int main()
{
    char* result[10];
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        int joo[3], min[3];
        scanf("%d %d %d %d %d %d", &joo[0], &joo[1], &joo[2], &min[0], &min[1], &min[2]);
        int jTotal = joo[0] + joo[1] + joo[2];
        int mTotal = min[0] + min[1] + min[2];
        if (jTotal > mTotal) {
            result[i] = "Joo-Ahn wins\n";
        }
        else if (jTotal < mTotal) {
            result[i] = "Min-Gwang wins\n";
        }
        else {
            int jOdd = 0;
            int mOdd = 0;
            for (int j = 0; j < 3; j++) {
                if (joo[j] % 2 == 1) {
                    jOdd += 1;
                }
                if (min[j] % 2 == 1) {
                    mOdd += 1;
                }
            }
            if (jOdd > mOdd) {
                result[i] = "Joo-Ahn wins\n";
            }
            else if (jOdd < mOdd) {
                result[i] = "Min-Gwang wins\n";
            }
            else {
                result[i] = "Draw\n";
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%s", result[i]);
    }

    return 0;
}
/**************************************************************
	Problem: 1289
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

