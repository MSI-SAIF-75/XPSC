#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;
#define N 2010
int a[N][N];
int cnt[N];

int t;
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[0][i];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cnt[j] = 0;

        for (int j = 1; j <= n; j++)
            cnt[a[i][j]]++;

        for (int j = 1; j <= n; j++)
            a[i + 1][j] = cnt[a[i][j]];
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //         cout << a[i][j] << " ";
    //     cout << "\n";
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int x, k;
        cin >> x >> k;
        if (k > n)
            k = n;
        cout << a[k][x] << "\n";
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