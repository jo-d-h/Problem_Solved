#include <iostream>
#include <cmath>
using namespace std;

int IsPrime(unsigned int x)
{ // x가 소수이면 1 리턴, 아니면 0 리턴

	if (x == 2)  // 2는 소수
		return 1;

	if (x <= 1 || x % 2 == 0) //0, 1, 짝수는 모두 소수 아님
		return 0;

	int limit = (int)sqrt((double)x); // 입력값의 루트를 구함

	for (int i = 3; i <= limit; i += 2) //3 ~ 제곱근(루트)까지 홀수만
	{
		// 입력값의 루트까지 나누어 떨어지는 것이 없으면 소수

		if (x % i == 0)
			return 0;
	}

	return 1;
}

int main()
{
	int t;
	cin >> t;

	for (int T = 0; T < t; T++)
	{
		int n;
		cin >> n;

		if (IsPrime(n))
			cout << "Prime" << endl;
		else
			cout << "Not Prime" << endl;

	}

	return 0;
}
/**************************************************************
	Problem: 1233
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2040 kb
****************************************************************/

