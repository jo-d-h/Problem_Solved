#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int t = a % b;
        a = b;
        b = t;
    }

    return a;
}

int main() 
{
    int n;
    cin >> n;

    vector<int> trees(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> trees[i];
    }

    sort(trees.begin(), trees.end());

    vector<int> diffs;

    for (int i = 1; i < n; i++) 
    {
        diffs.push_back(trees[i] - trees[i - 1]);
    }

    int interval = diffs[0];

    for (int i = 1; i < diffs.size(); ++i) 
    {
        interval = gcd(interval, diffs[i]);
    }

    int total = (trees[n - 1] - trees[0]) / interval + 1;
    int plant = total - n;

    cout << plant << endl;
    return 0;
}
/**************************************************************
	Problem: 1459
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

