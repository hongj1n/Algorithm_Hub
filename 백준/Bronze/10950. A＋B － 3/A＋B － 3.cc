#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int n1;
    int n2;

    for (int i = 1; i <= n; i++)
    {
        cin >> n1;
        cin >> n2;
        cout << (n1 + n2) << endl;
    }
    return 0;
}