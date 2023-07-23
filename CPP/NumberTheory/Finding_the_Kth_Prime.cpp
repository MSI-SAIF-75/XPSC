#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;
vector<ll> prime;
bool isPrime[90000001];
int t;
void solve()
{
    ll maxN = 90000000;
    for (int i = 1; i <= maxN; i++)
        isPrime[i] = true;

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= maxN; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= maxN; j += i)
                isPrime[j] = false;
        }
    }
    for (int i = 2; i <= maxN; i++)
    {
        if (isPrime[i])
            prime.push_back(i);
    }
}

int main()
{
    Faster;
    cin >> t;
    solve();
    while (t--)
    {
        ll n;
        cin >> n;
        cout << prime[n - 1] << "\n";
    }
    return 0;
}