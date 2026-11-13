#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++) 
    {
        int r, c;
        cin >> r >> c;

        int** arr = new int* [r];
        for (int i = 0; i < r; i++) 
        {
            arr[i] = new int[c];
        }

        for (int i = 0; i < r; i++) 
        {
            for (int j = 0; j < c; j++) 
            {
                arr[i][j] = i + j;
            }
        }

        for (int i = 0; i < r; i++) 
        {
            for (int j = 0; j < c; j++) 
            {
                cout << arr[i][j] << " ";
            }

            cout << endl;

        }
        cout << endl;


        for (int i = 0; i < r; i++) 
        {
            delete[] arr[i];
        }
        delete[] arr;
    }

    return 0;
}

/**************************************************************
	Problem: 1107
	Language: C++
	Result: Accepted
	Time:18 ms
	Memory:2028 kb
****************************************************************/

