#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        unordered_map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        ll mx = INT_MIN;
        ll flag = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (mp[i] >= 3)
            {
                mx = max(mx, i);
                flag = 1;
            }
        }

        if (flag == 1)
            cout << mx << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}