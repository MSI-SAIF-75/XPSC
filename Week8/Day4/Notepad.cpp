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

    if (n == 1)
    {
        cout << "NO\n";
        return;
    }

    int dp[30][30];

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
            dp[i][j] = 0;
    }

    for (int i = 0; i < n - 1; i++)
        dp[s[i] - 'a'][s[i + 1] - 'a']++;

    bool flag = false;
    for (int i = 0; i <= 26; i++)
    {
        for (int j = 0; j <= 26; j++)
        {
            if (i == j)
                continue;
            if (dp[i][j] > 1)
            {
                flag = true;
                break;
            }
        }
    }
    if (flag)
        cout << "YES\n" ;
    else
    {
        flag = false;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int cnt = 0;
            vector<int> v;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == c)
                {
                    cnt++;
                    if (i == n - 1 or s[i + 1] != c)
                    {
                        v.push_back(cnt);
                        cnt = 0;
                    }
                }
            }
            if (v.empty())
                continue;
            else
            {
                if (v.size() == 1)
                {
                    if (v[0] > 3)
                    {
                        flag = true;
                        break;
                    }
                }
                else
                {
                    int mx = 0;
                    for (int i = 0; i < v.size(); i++)
                    {
                        if (v[i] > 3 or mx > 1 and v[i] > 1)
                        {
                        flag = true;
                            break;
                        }
                        mx = max(mx, v[i]);
                    }
                    if (flag)
                        break;
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n" ;
    }
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