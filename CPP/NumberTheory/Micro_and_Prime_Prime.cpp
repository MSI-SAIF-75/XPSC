#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;
bool isPrime[1000001];
int pp[1000001];

int t;
void solve()
{

    int maxN = 1000000;
    for (int i = 0; i <= maxN; i++)
        isPrime[i] = true;
    isPrime[0] = isPrime[1] = 0;

    for (int i = 2; i * i <= maxN; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= maxN; j+=i)
                isPrime[j] = false;
        }
    }

    int cnt = 0;
    for (int i = 0; i <= maxN; i++)
    {
        if (isPrime[i] == true)
            cnt++;

        if (isPrime[cnt] == true)
            pp[i] = 1;
        else
            pp[i] = 0;
    }

    for (int i = 0; i <= maxN; i++)
        pp[i] += pp[i - 1];
}

int main()
{
    Faster;
    solve();
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int cnt = pp[r] - pp[l-1];
        cout << cnt << "\n";
    }
    return 0;
}