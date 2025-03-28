#include <iostream>

using namespace std;

int main()
{
    int thirty[30];
    int students[28];
    int student[2];

    for (int i = 0; i < 30; i++)
    {
        thirty[i] = i + 1;
    }

    for (int i = 0; i < 28; i++)
    {
        cin >> students[i];
        for (int j = 0; j < 30; j++)
        {
            if (students[i] == thirty[j])
            {
                thirty[j] = 0;
                break;
            }
        }
    }

    for (int i = 0; i < 30; i++)
    {
        if (thirty[i] != 0)
        {
            cout << thirty[i] << endl;
        }
    }
    return 0;
}