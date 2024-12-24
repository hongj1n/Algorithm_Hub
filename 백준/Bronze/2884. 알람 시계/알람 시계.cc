#include <iostream>
#include <string>

using namespace std;

int main()
{
    int hour;
    int min;
    cin >> hour >> min;

    if (min < 45)
    {
        min = 60 + (min - 45);
        if (hour == 0)
        {
            hour = 23;
        }

        else
        {
            hour--;
        }
    }

    else
    {
        min = min - 45;
    }
    cout << hour << ' ' << min << endl;
}