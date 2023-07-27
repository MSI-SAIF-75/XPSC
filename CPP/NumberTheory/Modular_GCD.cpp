#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

ll t;

ll power(ll a, ll n, ll d)
{
    ll res = 1;
    while (n)
    {
        if (n & 1)
        {
            res = ((res % d) * (a % d)) % d;
            n--;
        }
        else
        {
            a = (a % d * a % d) % d;
            n /= 2;
        }
    }
    return res;
}

ll GCD(int a, int b, int n)
{
    if (a == b)
        return (power(a, n, MOD) + power(b, n, MOD)) % MOD;

    ll candidate = 1;
    ll num = abs(a - b);

    for (ll i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            ll temp = (power(a, n, i) + power(b, n, i)) % i;

            if (temp == 0)
                candidate = max(candidate, i);

            temp = (power(a, n, num / i) + power(b, n, num / i)) % (num / i);

            if (temp == 0)
                candidate = max(candidate, num / i);
        }
    }
    return candidate % MOD;
}
void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    cout << GCD(a, b, n) << "\n";
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