#include <iostream>
#include <algorithm>

using namespace std;

struct student
{
    int stuID[1001];
	int attendance[1001];
};

int main()
{
    int n;
	cin >> n;

    student s;

    int id, att;
    int a = 0;

    for (int N = 0; N < n; N++)
    {
        cin >> id >> att;

        if (att >= 10 && att <= 15)
        {
            s.stuID[a] = id;
			s.attendance[a] = att;
			a++;
        }
    }

	if (a == 0)
	{
		cout << "None" << endl;
	}

	else
	{
		sort(s.stuID, s.stuID + a);

        for (int i = 0; i < a; i++)
        {
            cout << s.stuID[i] << endl;
        }
	}

   


    return 0;
}
/**************************************************************
	Problem: 1516
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:2028 kb
****************************************************************/

