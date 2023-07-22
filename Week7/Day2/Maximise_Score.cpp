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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            ans = min(ans, abs(a[i] - a[i + 1]));
        else if (i == n - 1)
            ans = min(ans, abs(a[i] - a[i - 1]));
        else
            ans = min(ans, max(abs(a[i] - a[i + 1]), abs(a[i] - a[i - 1])));
    }
    cout << ans << "\n";
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