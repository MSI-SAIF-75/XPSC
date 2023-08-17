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
    ll n, k;
    cin >> n >> k;
    if ((n & 1) == 0)
        cout << "YES\n";
    else
    {
        if (k & 1)
            cout << "YES\n";
        else
            cout << "NO\n";
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