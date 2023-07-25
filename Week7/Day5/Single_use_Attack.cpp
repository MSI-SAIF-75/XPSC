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
    int h, x, y;
    cin >> h >> x >> y;

    h -= y;
    int ans = (h / x);
    if (h % x)
        ans++;
    cout << ans + 1 << '\n';
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