#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int save = 0;
    for (int i = 0; i < N; i++)
    {
        int num = N - (3 * i);

        if (num >= 0 && num % 5 == 0)
        {
            save = i + (num / 5);
            break;
        }
    }

    if (save == 0)
    {
        cout << -1;
    }

    else
    {
        cout << save;
    }
    return 0;
}