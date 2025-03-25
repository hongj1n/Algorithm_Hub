#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int m;

    cin >> n >> m;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int storeArray[2] = {0};

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n - 2; j++)
        {
            for (int l = 1; l < n - 3; l++)
            {
                if (i + j + l < n and i + j < n)
                {
                    if (array[i] + array[i + j] + array[i + j + l] > m)
                    {
                        continue;
                    }

                    else
                    {
                        storeArray[1] = array[i] + array[i + j] + array[i + j + l];

                        if (storeArray[0] < storeArray[1])
                        {
                            storeArray[0] = storeArray[1];
                        }
                    }
                }
            }
        }
    }

    cout << storeArray[0] << endl;
    return 0;
}