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
    string s;
    cin >> s;

    string fix = "Timur";
    sort(fix.begin(), fix.end());

    if (fix.size() > n)
    {
        cout << "NO\n";
        return;
    }
    sort(s.begin(), s.end());
    bool f = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != fix[i])
        {
            f = false;
            break;
        }
    }

    if (f == true)
        cout << "YES\n";
    else
        cout << "NO\n";
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