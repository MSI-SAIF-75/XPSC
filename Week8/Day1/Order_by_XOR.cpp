#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;
ll t;


ll p(ll x, ll n)
{
    ll res = 1;
    while (n)
    {
        if (n & 1)
        {
            res = (res * x);
            n--;
        }
        else
        {
            x = (x * x);
            n /= 2;
        }
    }
    return res;
}

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll cnt = 0, x = 0, y = 0, z = 0;

    for (int i = 29; i >= 0; i--)
    {
        ll av = (a & (1 << i)), bv = (b & (1 << i)), cv = (c & (1 << i));
        if (av == bv && av == cv)
            ;
        else if (av < min(bv, cv))
            ;
        else if (av > max(bv, cv))
            cnt += p(2, i);
        else if (cv > max(bv, av))
            z++;
        else if (cv < min(av, bv))
            z++, cnt += p(2, i);
        else if (bv < min(av, cv))
        {
            if (z > y)
                cnt += p(2, i);
        }
        else if (bv > max(av, cv))
        {
            if (z > y)
                ;
            else
                cnt += p(2, i);
        }
    }
    if ((cnt ^ a) < (cnt ^ b) && (cnt ^ b) < (cnt ^ c))
        cout << cnt << endl;
    else
        cout << -1 << endl;
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