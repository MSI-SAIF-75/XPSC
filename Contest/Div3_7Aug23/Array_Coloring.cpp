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

    // if (n)

    int m = n / 2;
    int s1 = 0, s2 = 0;

    for (int i = 0; i < m; i++)
        s1 += a[i];
    for (int i = m; i < n; i++)
        s2 += a[i];

    // cout<<s1<<" "<<s2<<"\n";

    if ((((s1 & 1) == 0) && ((s2 & 1) == 0)) || ((s1 & 1) && (s2 & 1)))
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