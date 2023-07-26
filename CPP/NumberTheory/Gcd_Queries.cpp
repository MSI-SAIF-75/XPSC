#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

int pre[100005], suff[100005];
int a[100001];

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int t;
void solve()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    pre[0] = suff[n + 1] = 0;
    for (int i = 1; i <= n; i++)
        pre[i] = gcd(a[i], pre[i - 1]);

    for (int i = n; i >= 1; i--)
        suff[i] = gcd(a[i], suff[i + 1]);

    // for (int i = 1; i <= n; i++)
    //     cout << pre[i] << " ";
    // cout << "\n";
    // for (int i = 1; i <= n; i++)
    //     cout << suff[i] << " ";
    // cout << "\n";
    // cout << gcd(2, 9) << "\n";
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << gcd(pre[l - 1], suff[r + 1]) << "\n";
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