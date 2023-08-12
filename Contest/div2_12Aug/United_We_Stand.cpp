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

    sort(a.begin(), a.end());
    vector<int> b, c;
    b.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[0] == a[i])
            b.push_back(a[i]);
        else
            break;
    }

    for (int i = b.size(); i < n; i++)
        c.push_back(a[i]);

    if (c.empty())
    {
        cout << -1 << "\n";
        return;
    }

    // for (int i = 0; i < b.size(); i++)
    // {
    //     for (int j = 0; j < c.size(); j++)
    //     {
    //         if (b[i] % c[i] == 0)
    //         {
    //             cout << -1 << "\n";
    //             return;
    //         }
    //     }
    // }

    cout << b.size() << " " << c.size() << "\n";
    for (auto i : b)
        cout << i << " ";
    cout << "\n";
    for (auto i : c)
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