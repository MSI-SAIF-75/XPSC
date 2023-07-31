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
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        mp[a[i]] = 0;
    }

    sort(b.rbegin(), b.rend());
    int cnt = 0;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[cnt])
        {
            ans.push_back(a[i]);
            mp[a[i]] = 1;
        }

        else
        {
            ans.push_back(a[i]);
            mp[a[i]] = 1;

            for (int j = int(ans.size() - 1); j >= 0; j--)
                cout << ans[j] << " ";
            while (mp[b[cnt]] == 1)
                cnt++;
            ans.clear();
        }
    }

    for (int i = int(ans.size() - 1); i >= 0; i--)
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