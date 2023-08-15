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
    vector<pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    vector<ll> ans(n + 1);
    ll time = 0;
    ll idx = 1;
    for (int i = n - 1; i >= 0; i -= 2)
    {
        time += a[i].first * (2 * idx);
        ans[a[i].second] = idx;
        idx++;
    }
    idx = -1;
    for (int i = n - 2; i >= 0; i -= 2)
    {
        time += a[i].first * (2 * abs(idx));
        ans[a[i].second] = idx;
        idx--;
    }

    cout << time << "\n";
    cout << 0 << " ";
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";
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