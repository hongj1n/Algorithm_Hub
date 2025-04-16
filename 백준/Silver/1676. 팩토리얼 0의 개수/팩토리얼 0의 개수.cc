#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    unsigned int num;
    cin >> num;

    stack<int> fac2;
    int score = 0;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            int j = i;
            while (j % 2 == 0)
            {
                fac2.push(i);
                j /= 2;
            }
        }

        if (i % 5 == 0)
        {
            int j = i;
            while (j % 5 == 0)
            {
                if (!fac2.empty())
                {
                    fac2.pop();
                    score++;
                }

                else
                {
                    break;
                }

                j /= 5;
            }
        }
    }

    cout << score << endl;
    return 0;
}
