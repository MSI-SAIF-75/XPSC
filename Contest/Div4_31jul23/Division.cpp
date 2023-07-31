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

    if (1900 <= n)
        cout << "Division 1\n";
    else if (1600 <= n && n <= 1899)
        cout << "Division 2\n";
    else if (1400 <= n && n <= 1599)
        cout << "Division 3\n";
    else
        cout << "Division 4\n";
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