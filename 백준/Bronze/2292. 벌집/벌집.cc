#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;

    if (n == 1)
    {
        cout << 1;
    }

    else
    {
        while (n - 1 - (6 * i) > 0)
        {
            n = n - 6 * i;
            i++;
        }

        cout << i + 1;
    }
    return 0;
}