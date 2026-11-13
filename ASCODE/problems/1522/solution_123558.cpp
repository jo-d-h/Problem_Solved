#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[101];
	int yn = 1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		if (i % 2 == 0 && arr[i] != 1) {
			yn = 0;
			break;
		}

		if (i % 2 == 1 && arr[i] != 2) {
			yn = 0;
			break;
		}
	}

	if (yn == 1) {
		cout << "정상";
	}
	else {
		cout << "비정상";
	}
}
/**************************************************************
	Problem: 1522
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

