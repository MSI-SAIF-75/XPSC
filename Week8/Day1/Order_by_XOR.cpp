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
    int a, b, c;
    cin >> a >> b >> c;

    int x = 0;
    for (int i = 0; i <= 31; i++)
    {
        if ((x ^ a) < (x ^ b) && (x ^ b) < (x ^ c))
        {
            cout << x << "\n";
            return;
        }
        x = x << 1;
        x = x ^ 1;
    }

    cout << -1 << "\n";
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