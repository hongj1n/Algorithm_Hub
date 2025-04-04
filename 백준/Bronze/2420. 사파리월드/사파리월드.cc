#include <iostream>

using namespace std;

int main()
{
    long long n;
    long long m;

    cin >> n >> m;

    long long score = n - m;

    if (score < 0)
    {
        score = -score;
    }

    cout << score;
    return 0;
}