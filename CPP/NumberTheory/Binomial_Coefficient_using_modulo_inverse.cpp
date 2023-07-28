#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;
int F[1000001];

int power(int a, int n)
{
    int res = 1;
    while (n)
    {
        if (n & 1)
        {
            res = (res * 1LL * a) % MOD;
            n--;
        }
        else
        {
            a = (a * 1LL * a) % MOD;
            n /= 2;
        }
    }
    return res;
}
int C(int n, int k)
{
    if (k > n)
        return 0;

    int res = F[n];

    res = (res * 1LL * power(F[k], MOD - 2)) % MOD;
    res = (res * 1LL * power(F[n - k], MOD - 2)) % MOD;
    return res;
}

int t;

int main()
{
    Faster;
    F[0] = F[1] = 1;

    for (int i = 2; i <= 1000000; i++)
        F[i] = (F[i - 1] * 1LL * i) % MOD;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << C(n, k) << "\n";
    }
    return 0;
}