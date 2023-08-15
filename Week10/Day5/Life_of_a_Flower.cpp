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
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (i > 0 && a[i - 1] == 0)
            {
                cout << -1 << "\n";
                return;
            }
        }
        else
        {
            if (i > 0 && a[i - 1] == 1)
                ans += 5;
            else
                ans++;
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