#include <iostream>

using namespace std;

int main()
{
    int total;
    int n;
    int legendTotal = 0;

    cin >> total >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        int b;
        cin >> a >> b;
        legendTotal += a * b;
    }

    if (total == legendTotal)
    {
        cout << "Yes" << endl;
    }

    else
    {
        cout << "No" << endl;
    }

    return 0;
}