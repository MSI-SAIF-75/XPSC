#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;
int t;

int phi[1000001];
int getCount(int d, int n)
{
    return phi[n / d];
}

void solve()
{
    int n;
    cin >> n;
    int res = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int d1 = i;
            int d2 = n / i;

            res += getCount(d1, n);

            if (d1 != d2)
                res += getCount(d2, n);
        }
    }

    cout << res << "\n";
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