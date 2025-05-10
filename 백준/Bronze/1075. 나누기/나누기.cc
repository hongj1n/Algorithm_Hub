#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    a = a / 100;
    a = a * 100;

    int save = 0;
    for (int i = 0; i < 100; i++)
    {
        if (a % b == 0)
        {
            save = i;
            if (i < 10)
            {
                cout << '0' << i;
            }

            else
            {
                cout << i;
            }
            break;
        }

        a++;
    }
    return 0;
} 