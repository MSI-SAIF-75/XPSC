#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int t;
void doWork()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<ll> preArray(n + 2, 0);
    for (int i = 1; i <= n; i++)
        preArray[i] = a[i] + preArray[i - 1];

    vector<pair<ll, int>> qry(q);

    for (int i = 0; i < q; i++)
    {
        cin >> qry[i].first;
        qry[i].second = i;
    }

    sort(qry.begin(), qry.end());
    vector<ll> ans(q);
    ll cnt = 0;
    for (int i = 0; i < q; i++)
    {
        while (1)
        {
            if (cnt == n || a[cnt + 1] > qry[i].first)
                break;
            cnt++;
        }
        ans[qry[i].second] = preArray[cnt];
    }

    for (int i = 0; i < q; i++)
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