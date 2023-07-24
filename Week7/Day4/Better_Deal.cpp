#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

ll t;
void solve()
{
    int x, y;
    cin >> x >> y;
    x = 100 - (100 * x / 100);
    y = 200 - (200 * y / 100);

    // cout<<m<<" "<<n<<"\n";
    if (x < y)
        cout << "FIRST\n";
    else if (x > y)
        cout << "SECOND\n";
    else
        cout << "BOTH\n";
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