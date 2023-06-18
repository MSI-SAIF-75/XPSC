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
    ll n;
    cin >> n;
    vector<char> str(n);
    for (int i = 1; i <= n; i++)
        cin >> str[i];
    vector<ll> v;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ll L = i - 1;
        ll R = n - i;
        if (str[i] == 'L')
        {
            ll a = R - L;
            v.push_back(a);
            ans += L;
        }
        else
        {
            ll a = L - R;
            v.push_back(a);
            ans += R;
        }
    }

    sort(v.begin(), v.end(), greater<ll>());

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= 0)
            ans += v[i];
        cout << ans << " ";
    }
    cout << "\n";
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