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

    queue<int> q;
    q.push(1);
    q.push(2);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int d = abs(h - a[i]);

        bool f1 = q.size() && d % k == 0;
        bool f2 = q.size() && d <= (m - 1) * k;
        bool f3 = q.size() && d;

        if (q.size() && f1 && f2 && f3)
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