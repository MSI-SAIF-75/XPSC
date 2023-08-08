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
    ll x;
    cin >> x;

    string s = to_string(x);
    ll cnt = 0;
    vector<char> v;
    for (int i = s.size() - 1; i > 0; i--)
    {
        if (s[i] < '5')
            v.push_back(s[i]);
        else
        {
            v.push_back('0');
            s[i] = s[i] + 1;
        }
    }

    if (s[0] >= '5')
    {
        v.push_back('0');
        v.push_back('1');
    }
    else
        v.push_back(s[0]);

    reverse(v.begin(), v.end());

    for (auto i : v)
        cout << i;
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