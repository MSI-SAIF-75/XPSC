#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    int l = 0, r = 1;
    string ans = "";
    while (r <= n)
    {
        if (s[l] != s[r])
            r++;
        else
        {
            ans += s[l];
            l = r + 1;
            r = r + 2;
        }
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}