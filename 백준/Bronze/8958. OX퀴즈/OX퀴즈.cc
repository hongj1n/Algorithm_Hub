#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        int acc = 0;
        int total = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'O')
            {
                acc++;
                total += acc;
            }

            else
            {
                acc = 0;
            }
        }
        cout << total << endl;
    }
    return 0;
}