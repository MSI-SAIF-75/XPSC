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
    int cnt = 0;
    int m = n;
    for (int i = 0; i < n; i++)
    {
        if ((s[i] == '0' && s[m - i - 1] == '1') || (s[i] == '1' && s[m - i - 1] == '0'))
        {
            s[i] = 'x';
            s[m - i - 1] = 'y';
        }
        else
            break;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0' || s[i] == '1')
            cnt++;
    }
    cout << cnt << "\n";
}

// void solve()
// {
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;

//     int l = 0, r = n - 1;
//     while (l < r)
//     {
//         if (s[l] != s[r])
//             l++, r--;
//         else
//             break;
//     }

//     cout << (r - l + 1) << "\n";
// }

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