#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int

int count(int n)
{
    int cnt = 0;
    while (n)
    {
        if (n & 1)
            cnt++;
        n >>= 1;
    }
    return cnt;
}
int t;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m + 1);
    for (int i = 0; i <= m; i++)
        cin >> a[i];

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        // if (count(a[i] ^ a[m]) <= k)
        if (__builtin_popcount(a[i] ^ a[m]) <= k)
            ans++;
    }
    cout << ans << "\n";
}

int main()
{
    Faster;
    solve();
    return 0;
}