#include <bits/stdc++.h>
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
using namespace std;

ll t;
void doWork()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    vector<pair<ll, ll>> p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        p[i] = {a[i], i};
    }
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(p.begin(), p.end());
    sort(b.begin(), b.end());

    vector<ll> ans(n);
    for (int i = 0; i < n; i++)
        ans[p[i].second] = b[i];
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";
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