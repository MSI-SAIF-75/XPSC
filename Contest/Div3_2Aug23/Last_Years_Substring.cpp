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

    string like = "2020";

    int l = 0, r = 0;
    for (int i = 0; i < 4; i++)
    {
        if (s[l] == like[i])
            l++;
        else
            break;
    }

    for (int i = 0; i < 4; i++)
    {
        if (s[n - r - 1] == like[3 - i])
            r++;
        else
            break;
    }

    if (l + r >= 4)
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