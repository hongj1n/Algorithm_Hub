#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fullString;
    cin >> fullString;
    string storeString = "{}";

    for (int i = 1; i <= fullString.length() - 2; i++)
    {
        for (int j = i + 1; j <= fullString.length() - 1; j++)
        {
            string s = fullString.substr(0, i);
            string st = fullString.substr(i, j - i);
            string str = fullString.substr(j);

            reverse(s.begin(), s.end());
            reverse(st.begin(), st.end());
            reverse(str.begin(), str.end());

            string testString = s + st + str;

            if (storeString > testString)
            {
                storeString = testString;
            }
        }
    }

    cout << storeString;
    return 0;
}