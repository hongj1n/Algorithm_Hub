#include <iostream>
#include <algorithm>
using namespace std;

float calculator(float M, float b)
{
    float aft;
    aft = b / M * 100;
    return aft;
}

int main()
{
    int n;
    cin >> n;
    int score[n];
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }

    sort(score, score + n);

    float max = score[n - 1];
    float store = 0;

    for (int i = 0; i < n; i++)
    {
        store += calculator(max, score[i]);
    }
    cout << store / n << endl;
}
