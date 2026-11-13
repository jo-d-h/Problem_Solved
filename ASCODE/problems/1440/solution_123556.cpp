#include <iostream>
using namespace std;

int main() {
	unsigned short a, b;
	int n;
	cin >> a >> b;
	cin >> n;

	unsigned short mask = (1 << (16 - n)) - 1;

	unsigned short a_low = a & mask;
	unsigned short b_low = b & mask;

	unsigned short a_high = a & (~mask & 0xFFFF);
	unsigned short b_high = b & (~mask & 0xFFFF);

	unsigned short new_a = a_high | b_low;
	unsigned short new_b = b_high | a_low;

	cout << new_a << " " << new_b << endl;
	return 0;
}
/**************************************************************
	Problem: 1440
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

