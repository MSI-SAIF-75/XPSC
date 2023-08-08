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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    vector<int> v;
    int t = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < t)
            v.push_back(a[i]);
        else
        {
            v.push_back(t);
            t++;
        }
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += (a[i] - v[i]);

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