#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<string> backStack, forwardStack;
    string current = "http://www.acm.org/";
    string cmd;

    while (cin >> cmd)
    {
        if (cmd == "QUIT")
        {
            break;
        }

        else if (cmd == "BACK")
        {
            if (backStack.empty())
            {
                cout << "Ignored" << endl;
            }
            else
            {
                forwardStack.push(current);
                current = backStack.top();
                backStack.pop();
                cout << current << endl;
            }
        }

        else if (cmd == "FORWARD")
        {
            if (forwardStack.empty())
            {
                cout << "Ignored" << endl;
            }
            else
            {
                backStack.push(current);
                current = forwardStack.top();
                forwardStack.pop();
                cout << current << endl;
            }
        }

        else if (cmd == "VISIT")
        {
            backStack.push(current);
            cin >> current;
            while (!forwardStack.empty())
            {
                forwardStack.pop();
            }
            cout << current << endl;
        }

        else
        {
            cout << "Ignored" << endl;
        }
 
    }
    return 0;
}

/**************************************************************
	Problem: 1314
	Language: C++
	Result: Accepted
	Time:9 ms
	Memory:2032 kb
****************************************************************/

