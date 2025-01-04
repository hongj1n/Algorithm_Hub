#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    string s = to_string(a * b * c);

    for (int i = 0; i < 10; i++)
    {
        int num = 0;
        for (int j = 0; j < s.size(); j++)
        {
            int number = s[j] - '0';
            if (i == number)
            {
                num = num + 1;
            }
        }
        cout << num << endl;
    }
    return 0;
}