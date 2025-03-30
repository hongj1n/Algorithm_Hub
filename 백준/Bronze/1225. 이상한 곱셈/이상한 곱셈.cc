#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A;
    string B;

    long long score = 0;
    cin >> A >> B;
    for (int i = 0; i < A.length(); i++)
    {
        for (int j = 0; j < B.length(); j++)
        {

            score += (A[i] - '0') * (B[j] - '0');
        }
    }

    cout << score;
    return 0;
}