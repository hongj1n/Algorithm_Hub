#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int divisor[num];
    for (int i = 0; i < num; i++)
    {
        cin >> divisor[i];
    }

    sort(divisor, divisor + num);

    cout << divisor[0] * divisor[num - 1];
    
    return 0;
}