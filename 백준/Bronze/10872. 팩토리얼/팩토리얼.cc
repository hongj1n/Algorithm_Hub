#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long factorial = 1;

    if (n == 0)
    {
        n = 4;
    }

    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
    }

    cout << factorial;
    return 0;
}