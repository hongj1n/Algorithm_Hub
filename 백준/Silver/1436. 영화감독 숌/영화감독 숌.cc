#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    unsigned long int number = 0;
    string finder = to_string(number);

    for (int i = 0; i < num; i++)
    {
        do
        {
            number++;
            finder = to_string(number);
        } while (finder.find("666") == string::npos);
    }

    cout << number;
    return 0;
}