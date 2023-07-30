#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

ll t;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 1; i < n; i++)
        cin >> a[i];

    vector<ll> cnt(n + 2);
    ll x = -1;
    for (int i = 1; i < n; i++)
    {
        if ((a[i] - a[i - 1]) <= n && !cnt[a[i] - a[i - 1]])
            cnt[a[i] - a[i - 1]]++;
        else
            x = a[i] - a[i - 1];
    }

    if (x == -1)
    {
        ll sum = 1LL * n * (n + 1) / 2;
        x = sum - a[n - 1];
    }

    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        if (!cnt[i])
            ans.push_back(i);
    }

    if ((ans.size() == 1) && (x = ans[0]))
        cout << "YES\n";
    else if ((ans.size() == 2) && (x == ans[0] + ans[1]))
        cout << "YES\n";
    else
        cout << "NO\n";
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