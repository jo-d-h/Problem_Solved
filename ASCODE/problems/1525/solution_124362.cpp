#include <iostream>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
 
    for (int T = 0; T < t; T++)
    {
        int n;
        cin >> n;
 
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0) 
            {
                for (int j = i; j >= 1; j--)
                {
                    cout << j << " ";
                }
            }
 
            else
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << j << " ";
                }           
            }
 
            cout << endl;
        }
 
        if (T != t - 1) 
        {
            cout << endl;
        }
    }
}
/**************************************************************
	Problem: 1525
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

