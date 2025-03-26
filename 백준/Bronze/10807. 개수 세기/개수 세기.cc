#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int v;
    cin >> v;

    int score = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == v)
        {
            score++;
        }
    }

    cout << score << endl;
    return 0;
}