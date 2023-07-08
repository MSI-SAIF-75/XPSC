#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

ll t;
void doWork()
{
    ll n, k, x;
    cin >> n >> k;

    multiset<ll> s;
    for (int i = 0; i < n; i++)
    {

        cin >> x;
        s.insert(x);
    }

    ll ans = 0;
    while (s.size())
    {
        ll x = *s.begin();
        if (s.find(x * k) != s.end())
        {
            s.erase(s.begin());
            s.erase(s.find(x * k));
        }
        else
        {
            s.erase(s.begin());
            ans++;
        }
    }
    cout << ans << "\n";
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