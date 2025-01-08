#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int fre;
        cin >> fre;
        string s;
        cin >> s;

        for (int j = 0; j < s.size(); j++)
        {
            for (int l = 0; l < fre; l++)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }

    return 0;
}