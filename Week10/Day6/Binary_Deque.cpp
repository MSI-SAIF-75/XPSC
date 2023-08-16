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
    int n, s;
    cin >> n >> s;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0, l = 0, ans = INT_MIN;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        while (sum > s)
        {
            sum -= a[l];
            l++;
        }

        if (sum == s)
            ans = max(ans, i - l + 1);
    }
    if (ans < 0)
        cout << -1 << "\n";
    else
        cout << n - ans << "\n";
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