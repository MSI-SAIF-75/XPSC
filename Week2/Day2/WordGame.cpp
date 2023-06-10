#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s[3][n];
    unordered_map<string, int> freq;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> s[i][j];
            freq[s[i][j]]++;
        }
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << s[i][j] << " ";
    //         freq[s[i][j]]++;
    //     }
    //     cout << "\n";
    // }
    int ans[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (freq[s[i][j]] == 1)
                ans[i] += 3;
            else if (freq[s[i][j]] == 2)
                ans[i] += 1;
            else
                ;
        }
    }
    for (int i = 0; i < 3; i++)
        cout << ans[i] << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}