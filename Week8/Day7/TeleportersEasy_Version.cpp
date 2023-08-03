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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] += i + 1;
    }

    // for (int i = 0; i < n; i++)
    //     cout << a[i] << " ";

    sort(a.begin(), a.end());
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (k < sum + a[i])
            break;
        sum += a[i];
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