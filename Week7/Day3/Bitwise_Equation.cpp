#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

int t;
void solve()
{
    ll n;
    cin >> n;

    if (n == 0)
        cout << "3 1 6 7"
             << "\n";
    else
    {
        ll a = 1, b = 2, c = 0, d = 0;
        for (ll i = 3; i <= 1000000; i++)
        {
            ll curr = n ^ i;
            if (i == curr || curr <= 2)
                continue;
            c = i;
            d = curr;
            break;
        }

        if (c == 0)
            cout << -1 << "\n";
        else
            cout << a << " " << b << " " << c << " " << d << "\n";
    }
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