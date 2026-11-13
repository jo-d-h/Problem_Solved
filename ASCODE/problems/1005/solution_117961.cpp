#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    int arr[10];

    cin >> t;
    for (int T = 0; T < t; T++)
    {
        int time, count;
        cin >> time >> count;

        for (int i = 0; i < count; i++) 
        {
            cin >> arr[i];
        }

        for (int q = 1; q <= time; q++)
        {
            for (int w = 0; w < count; w++)
            {
                if (q % arr[w] == 0)
                {
                    cout << char('A' + w);
                }
            }
        }
        cout << endl;
    }

    return 0;
}
/**************************************************************
	Problem: 1005
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

