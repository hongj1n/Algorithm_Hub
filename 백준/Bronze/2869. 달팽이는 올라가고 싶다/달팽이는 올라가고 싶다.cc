#include <iostream>
#include <string>
using namespace std;

int main()
{
    double a, b, v;
    cin >> a >> b >> v;
    int stack = 1;
    int wjdtn = (v - a) / (a - b);
    if ((v - a) / (a - b) > wjdtn)
    {
        stack += wjdtn + 1;
    }

    else
    {
        stack += wjdtn;
    }

    cout << stack << endl;
    return 0;
}