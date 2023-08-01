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
    ll n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin > a[i];

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
            flag = true;
        
    }
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