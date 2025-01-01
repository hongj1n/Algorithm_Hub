#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << a + b - c << endl;
    string s, t, st;
    s = to_string(a);
    t = to_string(b);
    st = s + t;
    a = stoi(st);
    cout << a - c << endl;

    return 0;
}