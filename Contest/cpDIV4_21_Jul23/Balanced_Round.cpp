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
        cin >> a[i];

    sort(a.begin(), a.end());
    int cnt = 1;
    int mx = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] <= k)
            cnt++;
        else
        {
            mx = max(mx, cnt);
            cnt = 1;
        }
    }

    mx = max(mx, cnt);

    cout << n - mx << "\n";
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