#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    while (true)
    {
        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
        {
            break;
        }

        arr[0] = arr[0] * arr[0];
        arr[1] = arr[1] * arr[1];
        arr[2] = arr[2] * arr[2];
        if (arr[0] > arr[1])
        {
            if (arr[0] > arr[2])
            {
                if (arr[0] == arr[1] + arr[2])
                {
                    cout << "right" << endl;
                }

                else
                {
                    cout << "wrong" << endl;
                }
            }

            else
            {
                if (arr[2] == arr[0] + arr[1])
                {
                    cout << "right" << endl;
                }

                else
                {
                    cout << "wrong" << endl;
                }
            }
        }

        else if (arr[1] > arr[2])
        {
            if (arr[1] == arr[0] + arr[2])
            {
                cout << "right" << endl;
            }

            else
            {
                cout << "wrong" << endl;
            }
        }

        else
        {
            if (arr[2] == arr[0] + arr[1])
            {
                cout << "right" << endl;
            }

            else
            {
                cout << "wrong" << endl;
            }
        }
        cin >> arr[0] >> arr[1] >> arr[2];
    }
    return 0;
}