#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    ll l = 0, r = mx;
    int ans = -1;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (mid <= a[i])
            {
                ll x = abs(mid - a[i]);
                sum += x;
            }
        }

        if (sum >= m)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
        cout << sum << "\n";
    }
    cout << ans << "\n";

    return 0;
}