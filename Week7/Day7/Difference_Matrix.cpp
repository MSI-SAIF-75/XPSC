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

    int o = 1;
    int e = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (o <= n * n)
            {
                cout << o << " ";
                o += 2;
            }
            else
            {
                cout << e << " ";
                e += 2;
            }
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