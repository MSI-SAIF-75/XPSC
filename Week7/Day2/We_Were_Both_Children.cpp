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
    vector<int> count(n + 2, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= n)
            count[x]++;
    }

    vector<int> ans(n + 2);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
            ans[j] += count[i];
    }
    cout << *max_element(ans.begin(), ans.end()) << "\n";
    int mx = 0;
    for (int i = 1; i <= n; i++)
        mx = max(mx, ans[i]);

    // cout << mx << "\n";
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