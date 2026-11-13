#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

typedef struct 
{
    int x, y;
} Point;

int main() 
{
    int n;
    scanf("%d", &n);

    Point points[5000];

    for (int i = 0; i < n; i++) 
    {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    double cstdist = 100000;

    int xdiff = 0, ydiff = 1;

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            long long dx = points[i].x - points[j].x;
            long long dy = points[i].y - points[j].y;

            double dist = sqrt(dx * dx + dy * dy);

            if (dist < cstdist)
            {
                cstdist = dist;
                xdiff = i;
                ydiff = j;
            }
        }
    }

    Point p1 = points[xdiff];
    Point p2 = points[ydiff];

    if (p1.x > p2.x || (p1.x == p2.x && p1.y > p2.y)) 
    {
        Point temp = p1;
        p1 = p2;
        p2 = temp;
    }

    printf("(%d, %d) (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);

    return 0;
}

/**************************************************************
	Problem: 1337
	Language: C++
	Result: Accepted
	Time:104 ms
	Memory:1132 kb
****************************************************************/

