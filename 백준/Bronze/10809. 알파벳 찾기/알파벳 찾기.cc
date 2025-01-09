#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s.empty())
    {
        for (int x = 1; x <= 26; x++)
        {
            cout << -1 << ' ';
        }
        return 0;
    }

    else
    {
        for (int i = 0; i < 26; i++)
        {
            int n = -1;
            for (int j = s.size(); j > 0; j--)
            {
                if ((int)s[j - 1] == i + 97)
                {
                    n = j - 1;
                }
            }
            cout << n << ' ';
        }
        return 0;
    }
}