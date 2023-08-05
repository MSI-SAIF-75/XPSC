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
    int n;
    cin >> n;

    cout << (n + 1) / 2 << "\n";
    int l = 1,
        r = 3 * n;
    while (l < r)
    {
        cout << l << " " << r << " ";
        l += 3;
        r -= 3;
    }
    cout << "\n";
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