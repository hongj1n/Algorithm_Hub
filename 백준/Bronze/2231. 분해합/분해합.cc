#include <iostream>
#include <string>
using namespace std;

int main()
{
    unsigned int number;
    cin >> number;

    bool found = false;
    for (int i = 1; i < number; i++)
    {
        string s = to_string(i);
        unsigned int sum = i;
        for (int j = 0; j < s.size(); j++)
        {
            sum += s[j] - '0';
        }

        if (sum == number)
        {
            cout << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << 0 << endl;
    }

    return 0;
}