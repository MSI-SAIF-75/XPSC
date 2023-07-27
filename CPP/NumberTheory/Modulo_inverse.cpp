#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

int power(int a, int n, int m)
{
    int res = 1;
    while (n)
    {
        if (n & 1)
        {
            res = (res * a) % m;
            n--;
        }
        else
        {
            a = (a * a) % m;
            n /= 2;
        }
    }
    return res;
}

int t;
void solve()
{
    int a, m;
    cin >> a >> m;

    cout << "a^-1 = " << power(a, m - 2, m) << "\n";
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