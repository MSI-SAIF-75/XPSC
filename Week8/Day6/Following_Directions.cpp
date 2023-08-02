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
    int x = 0, y = 0;
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
            x++;
        else if (s[i] == 'L')
            x--;
        else if (s[i] == 'U')
            y++;
        else if (s[i] == 'D')
            y--;
        if (x == 1 && y == 1)
        {
            f = true;
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