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

    if (n > 45)
        cout << -1 << "\n";
    else
    {
        string ans;
        for (int i = 9; i >= 1; i--)
        {
            if (n - i >= 0)
            {
                n -= i;
                ans += to_string(i);
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }
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