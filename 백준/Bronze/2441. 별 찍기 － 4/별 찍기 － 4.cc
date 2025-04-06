#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s = '*';

    for (int i = 0; i < n; i++)
    {
        string stars(n - i, s);

        cout << setw(n) << stars << '\n';
    }

    return 0;
}