#include <iostream>

using namespace std;

int main(void)
{
    double A, B;

    cin >> A;
    cin >> B;
    cout << fixed;
    cout.precision(9);
    cout << A / B << endl;
    return 0;
}