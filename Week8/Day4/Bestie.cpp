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

    int gcd = a[0];

    for (int i = 0; i < n; i++)
        gcd = __gcd(gcd, a[i]);

    if (gcd == 1)
    {
        cout << 0 << "\n";
        return;
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int temp = a[i];

        a[i] = __gcd(a[i], (i + 1));
        int g = a[0];
        for (int j = 1; j < n; j++)
            g = __gcd(g, a[j]);

        if (g == 1)
            ans = min(ans, n - i);

        a[i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        int tmp = a[i];
        a[i] = __gcd(a[i], (i + 1));
        for (int j = i + 1; j < n; j++)
        {
            int tmpJ = a[j];
            a[j] = __gcd(a[j], (j + 1));
            int g = a[0];
            for (int k = 1; k < n; k++)
                g = __gcd(g, a[k]);

            if (g == 1)
                ans = min(ans, (n - i) + (n - j));
            a[j] = tmpJ;
        }
        a[i] = tmp;
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