#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num == 0)
    {
        cout << 0;
        return 0;
    }

    double number = static_cast<double>(num) * 15 / 100;
    number = round(number);

    vector<int> level;
    for (int i = 0; i < num; i++)
    {
        int n;
        cin >> n;

        level.push_back(n);
    }

    sort(level.begin(), level.end());

    double sum = 0;
    for (int i = number; i < level.size() - number; i++)
    {
        sum += level[i];
    }

    sum = sum / (level.size() - 2 * number);
    sum = round(sum);

    cout << sum;
    return 0;
}