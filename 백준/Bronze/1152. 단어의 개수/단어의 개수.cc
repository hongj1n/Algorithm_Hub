#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int score = 1;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            score++;
        }
    }

    if (s[s.size() - 1] == ' ')
    {
        score--;
    }

    if (s[0] == ' ')
    {
        score--;
    }
    cout << score << endl;
    return 0;
}