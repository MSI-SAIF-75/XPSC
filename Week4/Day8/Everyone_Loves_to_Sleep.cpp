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
    ll n;
    cin >> n;
    ll time, h, m;
    cin >> h >> m;
    time = 60 * h + m;
    ll ans = 24 * 60;

    for (int i = 1; i <= n; i++)
    {
        ll h, m;
        cin >> h >> m;
        ll t = 60 * h + m - time;
        if (t < 0)
            t += 24 * 60;
        ans = min(ans, t);
    }
    cout << ans / 60 << " " << ans % 60 << "\n";
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