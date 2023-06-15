#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll ans = 0;
    while (n--)
    {
        ll x;
        cin >> x;
        ans ^= x;
    }
    cout << ans << "\n";
    return 0;
}