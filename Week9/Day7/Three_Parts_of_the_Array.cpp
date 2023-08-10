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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll r = n - 1;
    ll l = 0;
    ll s1 = 0, s2 = 0, ans = 0;
    while (l <= r)
    {
        if (s1 < s2)
        {
            s1 += a[l];
            l++;
        }
        else
        {
            s2 += a[r];
            r--;
        }

        if (s1 == s2)
            ans = s1;
    }

    cout << ans << "\n";
}

int main()
{
    Faster;
    solve();
    return 0;
}