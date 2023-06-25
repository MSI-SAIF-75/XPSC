#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

ll t;
void doWork()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> res(n);
    res[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (res[i - 1] <= s - n + 1)
            res[i] = res[i - 1] + i;
        else
            res[i] = res[i - 1] + 1;
    }

    for (int i = 0; i < n; i++)
        cout << res[i] << " ";
    cout << "\n";
}

int main()
{
    Faster;
    cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}