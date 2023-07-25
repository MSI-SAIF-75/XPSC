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
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> eI;
    vector<int> oI;

    vector<int> e;
    vector<int> o;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            eI.push_back(i);
            e.push_back(a[i]);
        }
        else
        {
            oI.push_back(i);
            o.push_back(a[i]);
        }
    }

    bool ans = true;

    sort(e.begin(), e.end());
    sort(o.begin(), o.end());

    for (int i = 0; i < eI.size(); i++)
        a[eI[i]] = e[i];

    for (int i = 0; i < oI.size(); i++)
        a[oI[i]] = o[i];

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            ans = false;
    }

    if (ans)
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