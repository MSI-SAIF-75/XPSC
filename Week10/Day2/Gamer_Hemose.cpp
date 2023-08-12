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
    int n, h;
    cin >> n >> h;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a.begin() + 1, a.end());

    if (h <= a[n])
        cout << 1 << "\n";
    else
    {
        int sum = a[n] + a[n - 1];
        int ans = h / sum;
        int rem = h % sum;

        if (rem == 0)
            cout << ans * 2 << "\n";
        else
        {
            if (rem <= a[n])
                cout << ans * 2 + 1 << "\n";
            else
                cout << ans * 2 + 2 << "\n";
        }
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