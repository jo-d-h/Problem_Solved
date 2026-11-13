#pragma warning (disable:4996)
#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct Lotto
{
    int number;
    int count;
};

bool compare(Lotto a, Lotto b)
{
    if (a.count != b.count)
        return a.count > b.count;
    return a.number < b.number;
}

int main() 
{
    int n;
    cin >> n;

    int num[46] = { 0 };

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int m;
            cin >> m;
            num[m]++;
        }
    }

    Lotto arr[46];

    for (int i = 1; i <= 45; i++)
    {
        arr[i].number = i;
        arr[i].count = num[i];
    }

    sort(arr, arr + 45, compare);

    for (int i = 0; i < 6; i++) 
    {
        printf("%d ", arr[i].number);
    }

    return 0;
}
/**************************************************************
	Problem: 1122
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2028 kb
****************************************************************/

