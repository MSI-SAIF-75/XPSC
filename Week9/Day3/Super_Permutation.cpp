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

    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }

    if (n & 1)
        cout << -1 << "\n";
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
                cout << i << " ";
            else
                cout << n - i << " ";
        }
        cout << "\n";
    }
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