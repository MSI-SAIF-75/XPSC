#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int freq[26] = {0};

    for (int i = 0; i < str.size(); i++)
        freq[str[i] - 'a'] = 1;

    for (int i = 0; i < 26; i++)
    {
        if (!freq[i])
        {
            cout << char(i + 'a') << "\n";
            return 0;
        }
    }
    cout << "None"
         << "\n";

    return 0;
}