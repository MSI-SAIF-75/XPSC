#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
ll t;
vector<ll> adj_list[2000005];
ll cnt[2000005];

void leaf_count(ll src, ll pre)
{
    bool hasSrc = false;
    for (auto adj_node : adj_list[src])
    {
        if (adj_node != pre)
        {
            hasSrc = true;
            leaf_count(adj_node, src);
            cnt[src] += cnt[adj_node];
        }
    }
    if (!hasSrc)
        cnt[src] = 1;
}
void doWork()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cnt[i] = 0;
        adj_list[i].clear();
    }

    for (int i = 1; i < n; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    leaf_count(1, -1);
    ll q;
    cin >> q;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        cout << cnt[x] * cnt[y] << "\n";
    }
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