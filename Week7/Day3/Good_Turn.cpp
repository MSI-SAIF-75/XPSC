#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD=1e9+7;

int t;
void solve()
{
    int x, y;
    cin>>x>>y;
    int sum = x + y;

    if(sum>6)cout<<"YES\n";
    else cout<<"NO\n";
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