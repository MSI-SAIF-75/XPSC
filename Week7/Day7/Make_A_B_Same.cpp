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
    vector<char> s1(n);
    vector<char> s2(n);
    int o = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s1[i];
        if (s1[i] == '1')
            o++;
    }
    for (int i = 0; i < n; i++)
        cin >> s2[i];

    bool f = true;
    if (s1[0] != s2[0] || s1[n - 1] != s2[n - 1])
        f = false;
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s1[i] > s2[i])
            {
                f = false;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (s1[i] < s2[i] && o == 0)
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