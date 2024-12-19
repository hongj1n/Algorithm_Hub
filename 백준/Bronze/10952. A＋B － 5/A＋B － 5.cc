#include <iostream>

using namespace std;

int main()
{
    int A = 3, B = 2;
    while (A > 0 & B > 0)
    {
        cin >> A;
        cin >> B;

        if (A > 0 & B > 0)
        {
            cout << A + B << endl;
        }
    }
    return 0;
}