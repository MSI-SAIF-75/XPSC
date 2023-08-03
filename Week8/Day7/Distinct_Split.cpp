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
    string x;
    cin >> x;
    vector<int> suf(n, 0), pre(n, 0);
    set<int> s1, s2;
    for (int i = 0; i < n; i++)
    {
        s1.insert(x[i]);
        pre[i] = s1.size();
    }

    for (int i = n - 1; i >= 0; i--)
    {
        s2.insert(x[i]);
        suf[i] = s2.size();
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++)
        ans = max(ans, pre[i] + suf[i + 1]);

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