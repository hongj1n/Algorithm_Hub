#include <iostream>

using namespace std;

int main()
{
    int hour;
    int min;

    int cookingTime;

    cin >> hour >> min >> cookingTime;
    min += cookingTime;
    while (min >= 60)
    {
        if (hour < 23)
        {
            hour++;
        }

        else
        {
            hour = 0;
        }
        min -= 60;
    }

    cout << hour << ' ' << min << endl;
}