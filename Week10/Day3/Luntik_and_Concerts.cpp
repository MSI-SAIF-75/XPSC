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

    int s = a + 2 * b + 3 * c;
    if (s & 1)
        cout << 1 << "\n";
    else
        cout << 0 << "\n";
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
