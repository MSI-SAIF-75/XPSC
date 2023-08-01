#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

int t;
// void solve()
// {
//     ll n, q;
//     cin >> n >> k;
//     vector<ll> pre(n+1);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//         b[i] = a[i];
//     }

//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//         sum += a[i];

//     while (q--)
//     {
//         ll l, r, k;
//         cin >> l >> r >> k;

//         for (int j = l; j <= r; j++)
//             sum -= a[j];
//         for (int j = l; j <= r; j++)
//             sum += k;
//         for (int i = 1; i <= n; i++)
//             cout << a[i] << " ";
//         cout << sum << "\n";

//         if (sum & 1)
//             cout << "YES\n";
//         else
//             cout << "NO\n";

//         for (int k = 1; k <= n; k++)
//             a[k] = b[k];
//     }
// }

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> pre(n + 1);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        pre[i] = pre[i - 1] + x;
    }

    // for(int i = 1; i<=n; i++)cout<<pre[i]<<" ";
    // cout<<sum<<"\n";

    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int ans = sum - (pre[r] - pre[l-1]) + k * (r - l + 1);
        if (ans & 1)
            cout << "YES\n";
        else
            cout << "NO\n";
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