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

    int n = s.size();
    bool f = true;

    if (n & 1)
    {
        f = false;
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n / 2 + i])
            {
                f = false;
                break;
            }
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