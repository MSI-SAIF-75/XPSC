#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;

    ll arr[n + 1];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    ll cur = 0, ans = 0;
    arr[n] = INT_MAX; // -10^9 to 10^9

    for (int i = 0; i < n + 1; i++)
    {
        if (arr[i] <= q)
            cur++;
        else
        {
            ll x = cur - k + 1;
            ll way = (x * (x + 1)) / 2;
            if (cur >= k)
                ans += way;
            cur = 0;
        }
    }
    cout << ans << "\n";
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}