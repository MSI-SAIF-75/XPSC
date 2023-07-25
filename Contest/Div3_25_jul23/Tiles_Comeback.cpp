#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;
const int N = 2e5 + 10;

ll t;
void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    vector<ll> fre(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fre[a[i]]++;
    }

    if (a[0] == a[n - 1])
    {
        if (fre[a[0]] >= k)
        {
            cout << "YES\n";
            return;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }

    if (fre[a[0]] < k || fre[a[n - 1]] < k)
    {
        cout << "NO\n";
        return;
    }

    ll l = 0, r = n - 1;
    ll cnt = 0;

    while (l < n && cnt < k)
    {
        if (a[l] == a[0])
            cnt++;
        l++;
    }
    cnt = 0;
    while (r >= l)
    {
        if (a[n - 1] == a[r])
            cnt++;
        r--;
    }

    if (cnt >= k)
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