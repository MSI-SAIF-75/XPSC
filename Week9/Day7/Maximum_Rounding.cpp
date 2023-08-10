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
    string s;
    cin >> s;
    ll n = s.size();
    ll l = n + 1;
    for (ll i = n; i >= 0; i--)
    {
        if (s[i] > '4')
        {
            s[i - 1]++;
            l = i;
        }
    }

    for (ll i = l; i <= n; i++)
        s[i] = '0';

    if (s[0] == '0')
        cout << '1';
    
    for (int i = 0; i < n; i++)
        cout << s[i];
    cout << "\n";
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