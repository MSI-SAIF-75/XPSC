#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, k;
    cin >> n >> k;

    ll arr[n];
    ll sum = 0, mx = 0;
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (sum == k)
            mx = max(mx, i + 1);
        if (mp.find(sum - k) != mp.end())
        {
            ll idx = mp[sum - k];
            mx = max(mx, i - idx);
        }
        if (mp.find(sum) == mp.end())
            mp[sum] = i;
    }
    cout << mx << "\n";
    return 0;
}