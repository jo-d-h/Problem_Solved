#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    for (int T = 0; T < t; T++)
    {
        char a[1001];
        char b[1001];
 
        cin >> a >> b;
 
        int count_a[26] = { 0 };
        int count_b[26] = { 0 };
 
        int common[26];
 
        for (int i = 0; a[i]; i++)
        {
            count_a[a[i] - 'a']++;
        }
 
        for (int i = 0; b[i]; i++)
        {
            count_b[b[i] - 'a']++;
        }
 
        for (int i = 0; i < 26; i++)
        {
            common[i] = min(count_a[i], count_b[i]);
 
            for (int j = 0; j < common[i]; j++)
            {
                cout << (char)(i + 'a');
            }
        }
 
        cout << endl;
    }
 
    return 0;
}
/**************************************************************
	Problem: 1472
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

