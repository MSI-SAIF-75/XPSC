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
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    ll mx = sum;
    ll cnt = 0;
    ll mn = INT_MIN;
    ll absSum = 0;
    for (int i = 0; i < n; i++)
    {
        absSum += abs(a[i]);
        if (a[i] < 0)
            cnt++;
        mn = max(mn, -1 * (abs(a[i])));
    }

    // cout<<mn<<"\n";

    if ((cnt & 1) == 0)
        cout << max(mx, absSum) << "\n";
    else
        cout << max(mx, (absSum + 2*mn)) << "\n";
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