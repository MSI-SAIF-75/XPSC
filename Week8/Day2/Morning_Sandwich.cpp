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
    int b, c, h;
    cin >> b >> c >> h;
    int filling = c + h;

    if (filling >= b)
        cout << 2 * b - 1 << "\n";
    else
        cout << 2 * filling + 1 << "\n";
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