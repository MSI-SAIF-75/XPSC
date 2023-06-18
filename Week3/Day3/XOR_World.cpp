#include <bits/stdc++.h>
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
using namespace std;

ll t;

ll fun(ll x)
{
    if (x % 4 == 0)
        return x;
    if (x % 4 == 1)
        return 1;
    if (x % 4 == 2)
        return x + 1;
    return 0;
}
void doWork()
{
    ll a, b;
    cin >> a >> b;
    ll ans = fun(a - 1) ^ fun(b);
    cout << ans << "\n";
}

int main()
{
    Faster;
    // cin >> t;
    // while (t--)
    // {
    //     doWork();
    // }
    doWork();
    return 0;
}