#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int x;
    cin >> n;
    cin >> x;

    for (int i = 1; i <= n; i++)
    {
        int vari;
        cin >> vari;

        if (vari < x)
            cout << vari << endl;
    }
    return 0;
}