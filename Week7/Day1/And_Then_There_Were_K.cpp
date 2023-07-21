#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int

int t;
void solve()
{
    ll n;
    cin >> n;
    ll ans;
    for (int i = 0; i <= 30; i++)
    {
        if ((n & (1 << i))!=0)
            ans = i;
    }
    cout << (1<<ans)-1 << "\n";
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