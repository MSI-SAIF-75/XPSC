#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

int t;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> freq(27, -1);
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            if (freq[s[i] - 'a'] == -1 || freq[s[i] - 'a'] == 0)
                freq[s[i] - 'a'] = 0;
            else
            {
                cout << "NO\n";
                return;
            }
        }
        else
        {
            if (freq[s[i] - 'a'] == -1 || freq[s[i] - 'a'] == 1)
                freq[s[i] - 'a'] = 1;
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}

int main()
{
    Faster;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}