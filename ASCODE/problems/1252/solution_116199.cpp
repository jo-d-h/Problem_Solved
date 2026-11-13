#include <iostream>
#include <cmath>
using namespace std;

int decode(char* s)
{
	int result = 0;

	for (int i = 0; i < 8; i++)
	{
		if (s[i] == '1')
		{
			result += pow(2, 7 - i);
		}
	}

	return result;
}



int main()
{
	int t;
	cin >> t;

	for (int T = 0; T < t; T++)
	{
		char str[40];
		cin >> str;

		int x = decode(str);
		int y = decode(str + 8);
		int z = decode(str + 16);
		int w = decode(str + 24);

		cout << x << "." << y << "." << z << "." << w << endl;
	}
	
	return 0;
}


/**************************************************************
	Problem: 1252
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2212 kb
****************************************************************/

