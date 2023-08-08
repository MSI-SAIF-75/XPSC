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

    if (n == 1 || n == 2 || n == 4)
    {
        cout << -1 << "\n";
        return;
    }

    if (n % 3 == 0)
        cout << n / 3 << " " << 0 << " " << 0 << "\n";
    else if (n % 3 == 1)
        cout << (n - 7) / 3 << " " << 0 << " " << 1 << "\n";
    else
        cout << (n - 5) / 3 << " " << 1 << " " << 0 << "\n";
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