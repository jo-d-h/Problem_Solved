#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int target)
{
    int low = 0, high = n - 1;

    while (low <= high) 
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target) 
        {
            return mid;
        }
        else if (arr[mid] < target) 
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main() 
{
    int n;
    cin >> n;
    int arr[100000];

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        cout << binary_search(arr, n, x) << endl;
    }

    return 0;
}
/**************************************************************
	Problem: 1310
	Language: C++
	Result: Accepted
	Time:236 ms
	Memory:2296 kb
****************************************************************/

