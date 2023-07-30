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
    int n, k;
    cin >> n >> k;

    if (k > 30)
    {
        cout << 0 << "\n";
        return;
    }

    int ans = 0;

    for (int i = 0; i <= n; i++)
    {
        int s = n;
        int f = i;

        bool flag = true;
        for (int j = 1; j <= k - 2; j++)
        {
            int t = s - f;
            s = f;
            f = t;

            if (f <= s && f > -1)
                continue;
            else
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
            ans++;
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