#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;
ll a[3], I[3][3], T[3][3];

ll t;

void mul(ll a[][3], ll b[][3], ll n)
{

    ll res[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            res[i][j] = 0;
            for (int k = 1; k <= n; k++)
            {
                ll x = (a[i][k] * b[k][j]) % MOD;
                res[i][j] = (res[i][j] + x) % MOD;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            a[i][j] = res[i][j];
    }
}

int getFib(ll n)
{
    if (n <= 2)
        return a[n];

    I[1][1] = I[2][2] = 1;
    I[1][2] = I[2][1] = 0;

    T[1][1] = 0;
    T[1][2] = T[2][1] = T[2][2] = 1;

    n = n - 1;

    while (n)
    {
        if (n & 1)
        {
            mul(I, T, 2);
            n--;
        }
        else
        {
            mul(T, T, 2);
            n /= 2;
        }
    }

    ll Fn = ((a[1] * I[1][1] + a[2] * I[2][1]) % MOD);
    return Fn;
}
void solve()
{
    ll n;
    cin >> a[1] >> a[2] >> n;
    n++;
    cout << getFib(n) << "\n";
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