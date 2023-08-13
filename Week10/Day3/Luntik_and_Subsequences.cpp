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
    ll z = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
            z++;

        if (x == 1)
            o++;
    }

    cout << (ll)o * (1ll << z) << "\n";
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