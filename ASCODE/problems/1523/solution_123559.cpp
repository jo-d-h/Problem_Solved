#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[101];

	cin >> n;

	int max = -1001;
	int idx;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];

		if (arr[i] > max) {
			max = arr[i];
			idx = i;
		}
	}

	cout << max << endl << idx << endl;
}
/**************************************************************
	Problem: 1523
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

