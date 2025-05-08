#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int num;
    cin >> num;
    stack<int> stack;
    for (int i = 0; i < num; i++)
    {
        int num1;
        cin >> num1;
        if (num1 != 0)
        {
            stack.push(num1);
        }

        else
        {
            stack.pop();
        }
    }

    int score = 0;
    while (!stack.empty())
    {
        score += stack.top();
        stack.pop();
    }

    cout << score << endl;
    return 0;
}