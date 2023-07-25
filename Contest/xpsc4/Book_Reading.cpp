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
    ll x, y;
    cin >> x >> y;

    ll sum = 0;
    for (ll i = 2 * y; y <= x; i += y)
    {
        ll dig = i % 10;
        sum += dig;
    }
    cout << sum << "\n";
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