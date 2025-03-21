#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int count = 0;
    int nat;

    for (int i = 0; i < num; i++)
    {
        cin >> nat;
        if (nat != 1)
        {
            count++;
        }

        for (int j = 2; j < nat; j++)
        {
            if (nat % j == 0)
            {
                count--;
                break;
            }
        }
    }

    cout << count;
    return 0;
}