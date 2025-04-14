#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        string ps;
        cin >> ps;

        stack<char> vps;

        for (int j = 0; j < ps.size(); j++)
        {
            if (ps[j] == '(')
            {
                vps.push('(');
            }

            else if (ps[j] == ')')
            {
                if (!vps.empty())
                {
                    vps.pop();
                }

                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }

            if (j == ps.size() - 1)
            {
                if (vps.empty())
                {
                    cout << "YES" << endl;
                }

                else if (!vps.empty())
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}