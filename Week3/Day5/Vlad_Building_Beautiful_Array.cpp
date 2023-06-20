#include <bits/stdc++.h>
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
using namespace std;
const int mod = 1e9 + 7;

ll t;
void doWork()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    bool flag = true;
    ll mn = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 1)
            flag = false;

        mn = min(mn, a[i]);
    }
    if (mn % 2 == 1 || mn % 2 == 0 && flag == true)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
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