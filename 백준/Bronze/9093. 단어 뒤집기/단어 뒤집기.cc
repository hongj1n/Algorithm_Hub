#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int num;
    cin >> num;
    cin.ignore();
    for (int i = 0; i < num; i++)
    {
        string s;

        getline(cin, s);
        stack<char> stk;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] != ' ')
            {
                stk.push(s[j]);
                if (j == s.size() - 1)
                {
                    while (!stk.empty())
                    {
                        cout << stk.top();
                        stk.pop();
                    }
                }
            }

            else
            {
                while (!stk.empty())
                {
                    cout << stk.top();
                    stk.pop();
                }

                cout << ' ';
            }
        }

        cout << endl;
    }

    return 0;
}