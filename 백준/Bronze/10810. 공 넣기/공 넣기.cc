#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;

    cin >> n >> m;
    int basket[100] = {0};

    int array[3];
    for (int i = 0; i < m; i++)
    {
        cin >> array[0] >> array[1] >> array[2];
        for (int j = array[0]; j <= array[1]; j++)
        {
            basket[j - 1] = array[2];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << basket[i] << " ";
    }
    return 0;
}
