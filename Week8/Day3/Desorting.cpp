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
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            ans = 0;
            break;
        }
        else
        {
            int x = ((a[i] - a[i - 1]) / 2ll) + 1;
            ans = min(ans, x);
        }
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