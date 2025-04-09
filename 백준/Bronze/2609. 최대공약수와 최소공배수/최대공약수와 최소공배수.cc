#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;

    int greatest = 1;
    int max;
    int min;
    if (a > b)
    {
        max = a;
        min = b;
    }

    else
    {
        max = b;
        min = a;
    }
    for (int i = max; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            greatest = i;
            cout << i << endl;
            break;
        }
    }

    cout << a * b / greatest;
}