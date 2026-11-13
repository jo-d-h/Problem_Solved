#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int arr[4];
    
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 4);

    cout << arr[3] << endl;

    return 0;
}
/**************************************************************
	Problem: 1360
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

