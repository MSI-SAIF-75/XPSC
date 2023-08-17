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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<pair<int, int>> v;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x = a[i] - b[i];
        v.push_back({x, i + 1});
        mx = max(mx, x);
    }

    vector<int> ans;
    int cnt = 0;
    for (auto i : v)
    {
        if (mx == i.first)
        {
            cnt++;
            ans.push_back(i.second);
        }
    }

    cout << cnt << "\n";
    sort(ans.begin(), ans.end());
    for (auto i : ans)
        cout << i << " ";
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