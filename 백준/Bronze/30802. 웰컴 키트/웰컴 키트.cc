#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int N;
    cin >> N;

    long long int size[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> size[i];
    }

    long long int T;
    long long int P;
    cin >> T;
    cin >> P;

    int number = 0;

    for (int i = 0; i < 6; i++)
    {
        if (size[i] == 0)
        {
            int hello = 4;
        }

        else if (size[i] % T == 0)
        {
            number += size[i] / T;
        }

        else
        {
            number += size[i] / T + 1;
        }
    }

    cout << number << endl;

    cout << N / P << ' ' << N % P << endl;

    return 0;
}