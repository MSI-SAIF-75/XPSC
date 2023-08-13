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
    string m = s;
    sort(m.begin(), m.end());
    vector<char> a, b;
    cout << m[0] << " ";
    for (int i = 0; i < s.size(); i++)
    {
        if (m[0] == s[i])
        {
            s[i] = '0';
            break;
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0')
            cout << s[i];
    }
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