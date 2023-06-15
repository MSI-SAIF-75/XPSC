#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            for (ll k = 1; k <= n; k++)
            {
                ans += gcd(i, gcd(j, k));
            }
        }
    }
    cout << ans << "\n";
    return 0;
}