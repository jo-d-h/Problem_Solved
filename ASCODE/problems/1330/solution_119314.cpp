#include <iostream>
using namespace std;

const int MAX = 110;

int T;
int M1, N1, M2, N2;
int paper1[MAX][MAX], paper2[MAX][MAX], result[MAX][MAX];

// 회전된 종이를 temp에 저장, 회전 후 행/열 크기도 반환
void rotate(int src[MAX][MAX], int srcR, int srcC, int dest[MAX][MAX], int& destR, int& destC, int degree) {
    if (degree == 0) 
    {
        destR = srcR;
        destC = srcC;

        for (int i = 0; i < srcR; i++)
        {
            for (int j = 0; j < srcC; j++)
            {
                dest[i][j] = src[i][j];
            }
        }
    }

    else if (degree == 90) 
    {
        destR = srcC;
        destC = srcR;

        for (int i = 0; i < srcR; i++)
        {
            for (int j = 0; j < srcC; j++)
            {
                dest[j][srcR - 1 - i] = src[i][j];
            }
        }
    }

    else if (degree == 180) 
    {
        destR = srcR;
        destC = srcC;

        for (int i = 0; i < srcR; i++)
        {
            for (int j = 0; j < srcC; j++)
            {
                dest[srcR - 1 - i][srcC - 1 - j] = src[i][j];
            }
        }
    }

    else if (degree == 270) 
    {
        destR = srcC;
        destC = srcR;

        for (int i = 0; i < srcR; i++)
        {
            for (int j = 0; j < srcC; j++)
            {
                dest[srcC - 1 - j][i] = src[i][j];
            }
        }
    }
}


void overlay(int p1[MAX][MAX], int r1, int c1, int p2[MAX][MAX], int r2, int c2, int overlayArr[MAX][MAX]) 
{
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            overlayArr[i][j] = p2[i][j];
        }
    }

    for (int i = 0; i < r1 && i < r2; i++)
    {
        for (int j = 0; j < c1 && j < c2; j++)
        {
            overlayArr[i][j] = overlayArr[i][j] | p1[i][j];
        }
    }
}

// overlay 결과와 result 비교
bool isSame(int arr1[MAX][MAX], int arr2[MAX][MAX], int r, int c) 
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                return false;
            }
        }
    }

    return true;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> T;
    for (int t = 0; t < T; t++) 
    {
        cin >> N1 >> M1;

        for (int i = 0; i < M1; i++)
        {
            for (int j = 0; j < N1; j++)
            {
                cin >> paper1[i][j];
            }
        }

        cin >> N2 >> M2;

        for (int i = 0; i < M2; i++)
        {
            for (int j = 0; j < N2; j++)
            {
                cin >> paper2[i][j];
            }
        }

        for (int i = 0; i < M2; i++)
        {
            for (int j = 0; j < N2; j++)
            {
                cin >> result[i][j];
            }
        }

        bool found = false;

        for (int deg = 0; deg < 360; deg += 90)
        {
            int rotated[MAX][MAX], rR, rC;
            rotate(paper1, M1, N1, rotated, rR, rC, deg);

            if (rR > M2 || rC > N2)
                continue;

            int over[MAX][MAX];
            overlay(rotated, rR, rC, paper2, M2, N2, over);

            if (isSame(over, result, M2, N2)) 
            {
                found = true;
                break;
            }
        }

        cout << "\\" << t << "/ : " << (found ? "True" : "False") << "\n";
    }

    return 0;
}

/**************************************************************
	Problem: 1330
	Language: C++
	Result: Accepted
	Time:215 ms
	Memory:2324 kb
****************************************************************/

