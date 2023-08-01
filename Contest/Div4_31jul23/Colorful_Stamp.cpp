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

    if (n < 3)
    {
        cout << "NO\n";
        return;
    }

    int flag = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'R' || s[i + 1] == 'B')
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
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