#include <algorithm>
#include <iostream>
using namespace std;

bool compare(string str1, string str2)
{
    if (str1.size() == str2.size())
    {
        return str1 < str2;
    }

    else
    {
        return str1.size() < str2.size();
    }
}

int main()
{
    int number;
    cin >> number;

    string *word = new string[number];

    for (int i = 0; i < number; i++)
    {
        cin >> word[i];
    }

    sort(word, word + number, compare);

    cout << word[0] << endl;
    for (int i = 1; i < number; i++)
    {
        if (word[i] != word[i - 1])
        {
            cout << word[i] << "\n";
        }
    }

    return 0;
}