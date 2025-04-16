#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int num;
    cin >> num;

    stack<int> stack;
    for (int i = 0; i < num; i++)
    {
        string s;
        cin >> s;

        if (s == "push")
        {
            int num;
            cin >> num;

            stack.push(num);
        }

        else if (s == "pop")
        {
            if (!stack.empty())
            {
                cout << stack.top() << endl;
                stack.pop();
            }

            else
            {
                cout << -1 << endl;
            }
        }

        else if (s == "size")
        {
            cout << stack.size() << endl;
        }

        else if (s == "empty")
        {
            cout << stack.empty() << endl;
        }

        else
        {
            if (!stack.empty())
            {
                cout << stack.top() << endl;
            }

            else
            {
                cout << -1 << endl;
            }
        }
    }
}