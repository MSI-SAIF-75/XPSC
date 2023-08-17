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
    vector<int> a(n);
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    vector<int> l, r;
    int idx;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mx)
        {
            idx = i;
            break;
        }
        else
            l.push_back(a[i]);
    }

    for (int i = idx; i < n; i++)
        r.push_back(a[i]);

    // for (auto i : l)
    //     cout << i << " ";
    // cout << "\n";
    // for (auto i : r)
    //     cout << i << " ";
    // cout << "\n";

    bool f1 = true;
    for (int i = 1; i < l.size(); i++)
    {
        if (l[i - 1] <= l[i])
            f1 = true;
        else
        {
            f1 = false;
            break;
        }
    }

    bool f2 = true;
    for (int i = 1; i < r.size(); i++)
    {
        if (r[i - 1] >= r[i])
            f2 = true;
        else
        {
            f2 = false;
            break;
        }
    }
    // cout<<f1<<"\n";

    if (f1 == true && f2 == true)
        cout << "YES\n";
    else
        cout << "NO\n";
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