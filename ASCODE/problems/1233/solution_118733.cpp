#include <iostream>
using namespace std;

int IsPrime(unsigned int x)
{ // x가 소수이면 1 리턴, 아니면 0 리턴

	unsigned i;

	if (x <= 1)
		return 0; //0, 1은 모두 소수 아님

	if (x == 2)
		return 1; // 2는 소수

	if (x % 2 == 0) 
		return 0; // 짝수는 소수 아님

	for (i = 3; i < x; i = i + 2)
	{
		// 입력값-1 까지 홀수로만 나누어 떨어지는 것이 없으면 소수
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
	Memory:2028 kb
****************************************************************/

