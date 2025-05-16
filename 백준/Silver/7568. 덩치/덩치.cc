#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> height;
    vector<int> weight;

    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int inputHeight;
        int inputWeight;
        cin >> inputHeight >> inputWeight;
        height.push_back(inputHeight);
        weight.push_back(inputWeight);
    }

    vector<int> ranks;
    for (int i = 0; i < num; i++)
    {
        ranks.push_back(0);
        for (int j = 0; j < num; j++)
        {
            if (height[i] < height[j] && weight[i] < weight[j])
            {
                ranks[i]++;
            }
        }
    }

    int i = 0;
    for (int rank : ranks)
    {
        cout << rank + 1;
        if (i < ranks.size() - 1)
        {
            cout << ' ';
        }

        i++;
    }
    return 0;
}