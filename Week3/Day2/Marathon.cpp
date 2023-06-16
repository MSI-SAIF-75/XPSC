#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll ans = 0;
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a < b)
            ans++;
        if (a < c)
            ans++;
        if (a < d)
            ans++;

        cout << ans << "\n";
    }
    return 0;
}