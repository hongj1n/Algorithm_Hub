#include <iostream>

using namespace std;

int main()
{
    int N, L, D;
    cin >> N >> L >> D;

    int originD{D};
    for (int i = 0; i < N; i++)
    {
        if (i * (L + 5) <= D && D < (i + 1) * (L + 5) - 5) // 1 <= D < 5
        {
            while (D < (i + 1) * (L + 5) - 5)
            {
                D = D + originD;
            }
        }

        if ((i + 1) * (L + 5) - 5 <= D && D < i * (L + 5)) // 5 <= D < 10
        {
            cout << D << endl;
            break;
        }

        if (i == N - 1)
        {
            cout << D << endl;
            break;
        }
    }

    return 0;
}