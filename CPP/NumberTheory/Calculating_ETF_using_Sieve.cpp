#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;
int phi[1000001];

int t;
void solve()
{
    int n;
    cin >> n;
    int maxN = 1000000;
    for (int i = 1; i <= maxN; i++)
        phi[i] = i;

    for (int i = 2; i <= maxN; i++)
    {
        if (phi[i] == i)
        {
            for (int j = i; j <= maxN; j += i)
            {
                phi[j] /= i;
                phi[j] *= (i - 1);
            }
        }
    }

    cout << phi[n] << "\n";
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