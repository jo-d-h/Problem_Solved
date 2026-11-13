#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        char arr1[301];
        char arr2[301];

        int alpha_1[26] = { 0 };
        int alpha_2[26] = { 0 };

        cin >> arr1 >> arr2;

        int len1 = strlen(arr1);

        for (int i = 0; i < len1; i++)
        {
            arr1[i] = tolower(arr1[i]);

            int a = arr1[i] - 'a';
            alpha_1[a]++;
        }

        for (int i = 0; i < len1; i++)
        {
            arr2[i] = tolower(arr2[i]);

            int a = arr2[i] - 'a';
            alpha_2[a]++;
        }

        int yes = 1;

        for (int i = 0; i < 26; i++)
        {
            if (alpha_1[i] != alpha_2[i])
            {
                yes = 0;
                break;
            }
        }

        if (yes)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }

    return 0;
}

/**************************************************************
	Problem: 1398
	Language: C++
	Result: Accepted
	Time:15 ms
	Memory:2028 kb
****************************************************************/

