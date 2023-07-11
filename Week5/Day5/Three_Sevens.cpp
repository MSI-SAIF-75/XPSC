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

    map<int, int> lastOcc;
    for (int i = 1; i <= n; i++)
    {
        ll m;
        cin >> m;
        for (int j = 1; j <= m; j++)
        {
            int x;
            cin >> x;
            lastOcc[x] = i;
        }
    }
    vector<int> ans(n + 1, -1);

    for (auto [v, last] : lastOcc)
    {
        if (ans[last] == -1)
            ans[last] = v;
    }

    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (ans[i] == -1)
        {
            flag = false;
            break;
        }
    }

    if (flag == false)
    {
        cout << -1 << "\n";
    }
    else
    {

        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << "\n";
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