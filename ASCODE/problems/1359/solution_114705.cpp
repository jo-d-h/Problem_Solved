#include <iostream>
using namespace std;

int fun_sum(int n) 
{
    int sum = 0;

    while (n > 0) 
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() 
{
    int x, y;
    cin >> x >> y;

    int sum1 = fun_sum(x);
    int sum2 = fun_sum(y);

    int total = fun_sum(sum1 + sum2);

    cout << total << endl;

    return 0;
}
/**************************************************************
	Problem: 1359
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

