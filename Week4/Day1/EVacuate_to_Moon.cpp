#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

ll t;
void doWork()
{
    ll n, m, h;
    cin >> n >> m >> h;
    ll a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n, greater<>());
    sort(b, b + m, greater<>());
    ll ans = 0;
    for (int i = 0; i < n && i < m; i++)
    {
        if (b[i] * h > a[i])
            ans += a[i];
        else
            ans += b[i] * h;
    }
    cout << ans << "\n";
}

int main()
{
    Faster;
    cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}