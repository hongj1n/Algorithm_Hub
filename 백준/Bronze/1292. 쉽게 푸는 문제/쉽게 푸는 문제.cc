#include <iostream>

using namespace std;

int main()
{
    int start;
    int end;

    cin >> start >> end;

    int sequence[1001];

    int score = 0;
    int j = 1;
    for (int i = 0; i < 1000; i++)
    {
        for (int l = 0; l < j; l++)
        {
            if (i < 1000)
            {
                sequence[i] = j;
                i++;
            }

            else
            {
                break;
            }
        }
        j++;
        i--;
    }

    for (int i = start - 1; i < end; i++)
    {
        score += sequence[i];
    }
    cout << score;

    return 0;
}