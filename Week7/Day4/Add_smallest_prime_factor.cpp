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
    int x, y;
    cin >> x >> y;
    int p;
    if (x % 2 == 0)
        p = 2;
    else if (x % 3 == 0)
        p = 3;
    else
        p = x;

    x += p;
    int d = y - x;
    int ans = d / 2;
    if (d & 1)
        ans++;

    cout << ans + 1 << "\n";
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