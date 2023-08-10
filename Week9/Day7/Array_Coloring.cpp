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
    int m = n / 2;
    int x;
    int s1 = 0, s2 = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        s1 += x;
    }

    for (int i = m; i < n; i++)
    {
        cin >> x;
        s2 += x;
    }

    if (((s1 & 1) && (s2 & 1)) || ((s1 & 1) == 0 && (s2 & 1) == 0))
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