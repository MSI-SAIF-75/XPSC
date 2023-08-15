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
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    if (k < r && k < l)
    {
        cout << 0 << "\n";
        return;
    }
    int ans = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (l <= a[i] && r >= a[i])
        {
            sum += a[i];
            if (sum <= k)
                ans++;
        }
    }
    cout << ans << "\n";
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