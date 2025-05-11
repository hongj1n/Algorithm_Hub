#include <iostream>
using namespace std;

int main()
{
    unsigned long long n;
    cin >> n;

    unsigned long long score = 0;

    for (unsigned long long i = 1; i < n; i++)
    {
        score += (n + 1) * i;
    }

    cout << score;
    return 0;
}