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
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> ans;
    int m = n;

    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            ans.push_back(a[i]);
            ans.push_back(a[m--]);
        }
        else
        {
            ans.push_back(a[i]);
            ans.push_back(a[m--]);
        }
    }

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
        solve();
    }
    return 0;
}