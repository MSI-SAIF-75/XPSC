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
    ll n, m;
    cin >> n >> m;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        ll y;
        cin >> y;
        v.push_back(y);
    }

    // for (int i = 0; i < n + m; i++)
    //     cout << v[i] << " ";

    sort(v.begin(), v.end() - 1);
    reverse(v.begin(), v.end());
    ll s = 0;
    for (int i = 0; i < n; i++)
        s += v[i];
    cout << s << "\n";
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