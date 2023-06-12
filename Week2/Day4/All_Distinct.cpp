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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        ll ans = mp.size();

        ll dist = n - ans;
        if (dist % 2 == 1)
            ans--;

        cout << ans << "\n";
    }
    return 0;
}