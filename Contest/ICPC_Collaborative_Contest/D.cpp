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
    vector<ll> a(2 * n);
    for (int i = 0; i < (2 * n); i++)
        cin >> a[i];

    ll mx = INT_MIN;
    for (int i = 0; i < (2 * n); i++)
        mx = max(mx, a[i]);

    ll count = 0;
    for (int i = 0; i < (2 * n); i++)
    {
        if (a[i] == mx)
            count++;
    }
    if (2 * n == count)
        cout << "YES\n";
    else if (n == count)
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