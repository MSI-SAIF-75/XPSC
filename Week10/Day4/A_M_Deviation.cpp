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
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    int d = a1 + a3 - (2 * a2);

    if (d % 3 == 0)
        cout << 0 << "\n";
    else
        cout << 1 << "\n";
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