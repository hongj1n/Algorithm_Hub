#include <iostream>
#include <string>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    for (int e = 0; e < testcase; e++)
    {
        int K;
        int N;
        cin >> K >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            arr[i] = i + 1;
        }

        for (int i = 0; i < K; i++)
        {
            for (int j = N - 1; j >= 0; j--)
            {
                for (int l = j - 1; l >= 0; l--)
                {
                    arr[j] = arr[j] + arr[l];
                }
            }
        }
        cout << arr[N - 1] << endl;
    }
    return 0;
}