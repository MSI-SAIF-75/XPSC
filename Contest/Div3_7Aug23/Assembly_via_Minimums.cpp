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
    ll n;
    cin >> n;
    ll m = (n * (n - 1)) / 2;
    map<ll, ll> mp;
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }

    vector<ll> v;
    ll r = n - 1;
    for (auto it : mp)
    {
        if (r == it.second)
        {
            v.push_back(it.first);
            r--;
        }
        else
        {
            int x = r, p = 0;
            while (x > 0 && it.second != p)
            {
                p += x;
                v.push_back(it.first);
                x--;
            }
            r = x;
        }
    }

    for (auto it : v)
        cout << it << " ";
    ll s = v.size();
    while (s != n)
    {
        cout << 1000000000 << "\n";
        s++;
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