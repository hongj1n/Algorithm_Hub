#include <iostream>
#include <string>
using namespace std;

int main()
{
    int store[10];
    int score = 10;
    for (int i = 0; i < 10; i++)
    {
        int n;
        cin >> n;

        store[i] = n % 42;

        for (int j = 0; j < i; j++)
        {
            if (store[i] == store[j])
            {
                score--;
                break;
            }
        }
    }
    cout << score << endl;
    return 0;
}