#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(yo) (ll)yo.size()
 
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0;i < n;i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    ll tot = n - 2, sum = 0, idx = 0;
    map<ll, ll> mp;
    while (tot >= 1)
    {
        sum += (tot * (tot + 1)) / 2;
        mp[sum] = idx;
        idx++;
        tot--;
    }
    while (q--)
    {
        ll x;
        cin >> x;
        auto lb = mp.lower_bound(x);
        cout << a[lb->second] << '\n';
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    t = 1;
    cin >> t;
    for (ll cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        solve();
    }
    return 0;
}
 
// 2 4 2 1 = Ai, Aj, Ak(i < j < k)