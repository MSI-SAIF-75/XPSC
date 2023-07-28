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
    string ans = "";

    int i = 0, j = 0;
    while (j < n)
    {
        int cnt = 0;
        while (s[i] == s[j] && j < n)
        {
            cnt++;
            j++;
        }

        if (cnt & 1)
            ans += s[i];
        else
        {
            ans += s[i];
            ans += s[i];
        }
        i = j;
    }
    cout << ans << "\n";
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