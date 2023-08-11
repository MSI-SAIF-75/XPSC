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
    int n, c;
    cin >> n >> c;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    int l = 0, r = a[n - 1], ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int left = 0, cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[left] >= mid)
            {
                left = i;
                cnt++;
            }
        }

        if (cnt >= c)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
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