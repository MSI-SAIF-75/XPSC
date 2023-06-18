#include <bits/stdc++.h>
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
using namespace std;

ll t;
void doWork()
{
    ll n, k, g;
    cin >> n >> k >> g;
    ll x = n + k + g;

    ll r = x % g;
    if (r >= (g / 2))
    {
        cout << x + (g - r) << "\n";
    }
    else
    {
        cout << x - r << "\n";
    }
}

int main()
{
    Faster;
    cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}