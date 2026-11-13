#pragma warning(disable:4996)
#include <stdio.h>

int ar[500][500], result[1000];
int t, n, m,hp = 0;
int i, j, temp;

void fix1() {
    //2차원 배열 버블함수로 정렬하는 함수
    for (int c = 0; c < n; c++) {
        for (i = 0; i < m; i++) {
            for (j = 0; j < m - 1 - i; j++)
            {
                if (ar[c][j] > ar[c][j+1]) {
                    temp = ar[c][j+1];
                    ar[c][j+1] = ar[c][j];
                    ar[c][j] = temp;
                }
            }
        }
    }
    //최하위 최상위 값 가져와서 1차원 배열(결과값)으로 정리
    hp = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (j == 0 || j == m - 1) {
                result[hp] = ar[i][j];
                hp++;
            }
        }
    }

    //다시 1차원 배열에서 버블함수로 정렬하기
    for (i = 0; i < n * 2; i++)
    {
        for (j = 0; j < n * 2 - 1 - i; j++)
        {
            if (result[j] > result[j+1]) {
                temp = result[j+1];
                result[j+1] = result[j];
                result[j] = temp;
            }
        }
    }
}

int main() 
{

    scanf("%d", &t);
    for (int p = 0; p < t; p++)
    {
        //2차원 배열 영역/생물 수 입력받기
        scanf("%d %d", &n, &m);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                scanf("%d", &ar[i][j]);
            }
        }

        //모든과정이 들어있는 함수
        fix1();

        //결과값을 출력
        for (i = 0; i < n * 2; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1293
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:2100 kb
****************************************************************/

