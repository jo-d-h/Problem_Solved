#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    double result = a * (1 + (b / 100.0));

    printf("%.1f\n", result);

    return 0;
}
/**************************************************************
	Problem: 1431
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

