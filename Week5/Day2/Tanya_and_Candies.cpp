#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int t;
int main()
{
    Faster;
    ll n;
    cin >> n;
    ll a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    ll os = 0, es = 0, ans = 0;
    for (int i = 2; i <= n; i++)
    {
        if (i & 1)
            es += a[i];
        else
            os += a[i];
    }
    if (os == es)
        ans++;
   for (int i = 2; i <= n; i++)
    {
        if (i & 1)
        {
            es -= a[i];
            es += a[i - 1];
        }
        else
        {
            os -= a[i];
            os += a[i - 1];
        }
        if (os == es)
            ans++;
    }
    cout << ans<<"\n";
    return 0;
}