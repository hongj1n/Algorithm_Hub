#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[10000] = {0};

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        array[num - 1] += 1;
    }

    for (int i = 0; i < 10000; i++)
    {
        if (array[i] == 0)
        {
            continue;
        }

        for (int j = 0; j < array[i]; j++)
        {
            cout << i + 1 << "\n";
        }
    }

    return 0;
}