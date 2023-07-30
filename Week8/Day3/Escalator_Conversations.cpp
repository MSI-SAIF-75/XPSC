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
    int n, m, k, h;
    cin >> n >> m >> k >> h;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int d = abs(h - a[i]);
        bool f1 = (d % k == 0);
        bool f2 = (d <= (m - 1) * k);
        bool f3 = d;

        if (f1 && f2 && f3)
            sum++;
    }
    cout << sum << "\n";
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