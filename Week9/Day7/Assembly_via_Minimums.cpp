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
    ll m = (n * (n - 1)) / 2;
    map<ll, ll> mp;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int r = n - 1;
    vector<int> ans;
    for (auto it : mp)
    {
        if (it.second == r)
        {
            ans.push_back(it.first);
            r--;
        }
        else
        {
            int x = r, p = 0;
            while (x > 0 && it.second != p)
            {
                p += x;
                ans.push_back(it.first);
                x--;
            }
            r = x;
        }
    }

    for (auto i : ans)
        cout << i << " ";
    int s = ans.size();
    while (s != n)
    {
        if (s == 1)
            cout << ans[0] << " ";
        else
            cout << ans[s - 1] << " ";
        s++;
    }
    cout << "\n";
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