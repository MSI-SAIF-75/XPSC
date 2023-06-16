#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        string s[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> s[i];

        ll ans = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                ll diff = 0;
                for (int k = 0; k < m; k++)
                    diff += abs(s[i][k] - s[j][k]);
                ans = min(ans, diff);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}