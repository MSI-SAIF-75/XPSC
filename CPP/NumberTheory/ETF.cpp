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
    int res = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res /= i;
            res *= (i - 1);
            while (n % i == 0)
                n /= i;
        }
    }

    if(n>1){
        res/=n;
        res*=(n-1);
    }
    cout<<res<<"\n";
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