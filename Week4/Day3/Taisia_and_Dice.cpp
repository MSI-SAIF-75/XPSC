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
    ll n, s, r;
    cin >> n >> s >> r;

    ll mx = s - r;
    vector<ll> res;
    for (int i = 0; i < n; i++)
    {
        while (s - mx < n - i - 1)
            mx--;
        res.push_back(mx);
        s -= mx;
    }
    sort(res.begin(), res.end());
    for (auto x : res)
        cout << x << " ";
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