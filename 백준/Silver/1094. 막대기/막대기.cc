#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int totalLength = 64;
    vector<int> stick = {64};

    while (totalLength > num)
    {
        totalLength = 0;
        int halfStick = stick[stick.size() - 1] / 2;
        stick.pop_back();
        stick.push_back(halfStick);
        stick.push_back(halfStick);

        for (int i = 0; i < stick.size() - 1; i++)
        {
            totalLength += stick[i];
        }

        if (totalLength >= num)
        {
            stick.pop_back();
        }

        else
        {
            totalLength += stick[stick.size() - 1];
        }
    }

    cout << stick.size();
    return 0;
}